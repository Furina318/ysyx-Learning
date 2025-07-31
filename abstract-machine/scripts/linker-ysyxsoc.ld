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
/* 当前计数器指向mrom起始地址 */
  . = _mrom_start;

  .text : ALIGN(4) {
    _text = .;

    *(.text.startup)
    *(.text*)

    . = ALIGN(4);
    PROVIDE(etext = .);
    _etext = .;
  } > mrom
  _text_load = LOADADDR(.text);
  _etext_load = _text_load + SIZEOF(.text);

  .bl.f : ALIGN(4) {
    *(.bl.f*)

    . = ALIGN(4);
  } > mrom

  .bl.s : ALIGN(4) {
    _bl_s = .;

    *(.bl.s*)

    . = ALIGN(4);
    _ebl_s = .;
  } > sram AT> mrom
  _bl_s_load = LOADADDR(.bl.s);
  _ebl_s_load = _bl_s_load + SIZEOF(.bl.s);

  .rodata : ALIGN(4) {
    *(.rodata*)
    *(.srodata*)
  } > mrom

  .data : ALIGN(4) {
    _data = .;

    *(.data*)
    *(.sdata*)
    
    . = ALIGN(4);
    PROVIDE(edata = .);
    _edata = .;
  } > sram AT> mrom
  _data_load = LOADADDR(.data);
  _edata_load = _data_load + SIZEOF(.data);

  .bss (NOLOAD) : ALIGN(4) {
    _bss_start = .;

    *(.bss*)
    *(.sbss*)
    *(.scommon)

    . = ALIGN(4);
    _ebss = .;
  } > sram

  PROVIDE(end = .);
  _end = .;

  . = ALIGN(8);
  _heap_start = _sram_start;

  .stack (NOLOAD) : ALIGN(8) {
    . = ORIGIN(sram) + LENGTH(sram) - _stack_size;
    . = ALIGN(8);
    _stack_top = .;
    . += _stack_size;
    . = ALIGN(8);
    _stack_pointer = .;
  } > sram
}
/* +-------------------+ 0x20000000 (mrom 开始)
   | .text             |
   | .bl.f             |
   | .rodata           |
   | .bl.s (存储映像)   |
   | .data (初始值)     |
   +-------------------+ 
   |                   | 
   |                   | 
   +-------------------+ 0x0f000000 (sram 开始)
   | .bl.s (运行时)     |
   | .data (运行时)     |
   | .bss              |
   | 堆 (heap)         |
   | ...               |
   | 栈 (stack)        | <- _stack_pointer
   |                   |
   +-------------------+ 0x0f001FFF (sram 结束) */