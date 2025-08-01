ENTRY(_start)

MEMORY {
  mrom  (r x) : ORIGIN = 0x20000000, LENGTH = 4K
  sram  (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  _sram_start = ORIGIN(sram);
  _sram_end = _sram_start + LENGTH(sram);
  _mrom_start = ORIGIN(mrom);
  _mrom_end = _mrom_start + LENGTH(mrom);

  . = _mrom_start;

  .text : ALIGN(4) {
    _text = .;

    *(entry)
    *(.text*)

  } > mrom AT> mrom

  .rodata : {

    *(.rodata*)
    *(.srodata*)

  } > mrom

  .data : ALIGN(4) {
  _data_start = .;
    *(.data*)
    *(.sdata*)
  _data_end = .;
  } > sram AT> mrom

  _data_start_lma = LOADADDR(.data);

  .bss : ALIGN(4) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sram

_heap_start = ALIGN(_bss_end, 8);

  .stack (NOLOAD) : ALIGN(8) {
    . = ORIGIN(sram) + LENGTH(sram) - _stack_size;
    . = ALIGN(8);
    _stack_top = .;
    . += _stack_size;
    _stack_pointer = .;
  } > sram
}