ENTRY(_start)

MEMORY {
  mrom  (r x) : ORIGIN = 0x20000000, LENGTH = 4K
  flash (rwx) : ORIGIN = 0x30000000, LENGTH = 16M
  sram  (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  sdram (rwx) : ORIGIN = 0xa0000000, LENGTH = 64M
}

SECTIONS {
  _sram_start = ORIGIN(sram);
  _sram_end = _sram_start + LENGTH(sram);
  _psram_start = ORIGIN(psram);
  _psram_end = _psram_start + LENGTH(psram);
  _flash_start = ORIGIN(flash);
  _flash_end = _flash_start + LENGTH(flash);
  _mrom_start = ORIGIN(mrom);
  _mrom_end = _mrom_start + LENGTH(mrom);
  _sdram_start = ORIGIN(sdram);
  _sdram_end = _sdram_start + LENGTH(sdram);

  . = _flash_start;

  .bl.f : ALIGN(4) {
    *(.bl.f*)

    . = ALIGN(4);
  } > flash

  .bl.s : ALIGN(4) {
    _bl_s = .;
    *(.bl.s*)
    . = ALIGN(4);
    _ebl_s = .;
  } > sram AT> flash
  _bl_s_load_lma = LOADADDR(.bl.s);

  .text : ALIGN(4) {
    _text_start = .;
    *(.text*)
    _text_end = .;
  } > sdram AT> flash
  _text_load_lma = LOADADDR(.text);

  .rodata : ALIGN(4) {
    _rodata_start = .;
    *(.rodata*)
    *(.srodata*)
    _rodata_end = .;
  } > flash
  _rodata_load_lma = LOADADDR(.rodata);

  .data : ALIGN(4) {
    _data_start = .;
    *(.data*)
    *(.sdata*)
    _data_end = .;
  } > sdram AT> flash
  _data_load_lma = LOADADDR(.data);

  .bss : ALIGN(4) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sdram AT> flash

  _heap_start = _psram_start;

  .stack (NOLOAD) : ALIGN(8) {
    . = ORIGIN(sram) + LENGTH(sram) - _stack_size;
    . = ALIGN(8);
    _stack_top = .;
    . += _stack_size;
    _stack_pointer = .;
  } > sram
}