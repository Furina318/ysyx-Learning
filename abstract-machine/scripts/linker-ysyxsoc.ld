ENTRY(_start)

MEMORY {
  mrom  (r x) : ORIGIN = 0x20000000, LENGTH = 4K
  sram  (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  flash (r x) : ORIGIN = 0x30000000, LENGTH = 16M
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  sdram (rwx) : ORIGIN = 0xa0000000, LENGTH = 64M
}

SECTIONS {
  _sram_start = ORIGIN(sram);
  _sram_end = _sram_start + LENGTH(sram);
  _mrom_start = ORIGIN(mrom);
  _mrom_end = _mrom_start + LENGTH(mrom);
  _flash_start = ORIGIN(flash);
  _flash_end = _flash_start + LENGTH(flash);
  _psram_start = ORIGIN(psram);
  _psram_end = _psram_start + LENGTH(psram);
  _sdram_start = ORIGIN(sdram);
  _sdram_end = _sdram_start + LENGTH(sdram);

  /* . = _mrom_start; */
  . = _flash_start;

  .fsbl : {
		. = ALIGN(8);
    *(entry)
		*(.fsbl*)
		. = ALIGN(8);
	} > flash AT> flash

  .ssbl : {
		. = ALIGN(8);
		_ssbl = .;
		*(.ssbl*)
		_essbl = .;
		. = ALIGN(8);
	} > sram AT> flash
	_ssbl_lma = LOADADDR(.ssbl);
	_ssbl_size = _essbl - _ssbl;


  .text : ALIGN(4) {
    _text = .;
    /* *(entry) */
    *(.text*)
    _etext = .;
    . = ALIGN(4);
  } > sdram AT> flash
  _text_lma = LOADADDR(.text);
  _text_size = _etext - _text;


  .rodata : ALIGN(4) {
    _rodata = .;
    *(.rodata*)
    *(.srodata*)
    _erodata = .;
    . = ALIGN(4);
  } > flash
  _rodata_lma = LOADADDR(.rodata);
  _rodata_size = _erodata - _rodata;

  .data : ALIGN(4) {
   _data = .;
    *(.data*)
    *(.sdata*)
   _edata = .;
  } > sdram AT> flash
  _data_lma = LOADADDR(.data);
  _data_size = _edata - _data;

  .bss : ALIGN(4) {
    _bss = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _ebss = .;
  } > sdram AT> flash
  _bss_lma = LOADADDR(.bss);
  _bss_size = _ebss - _bss;

  _heap_start = ALIGN(_ebss, 8);
  /* _heap_start = ALIGN(0x1000);
  _heap_end = ORIGIN(sram) + LENGTH(sram);

  _stack_top = ORIGIN(sram);
  . = _stack_top + LENGTH(sram);
  _stack_pointer = .;
  _stack_end = .; */
  .stack (NOLOAD) : ALIGN(8) {
    . = ORIGIN(sram) + LENGTH(sram) - _stack_size;
    . = ALIGN(8);
    _stack_top = .;
    . += _stack_size;
    _stack_pointer = .;
  } > sram
}