ENTRY(Reset_Handler)
MEMORY
{
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 1024K
	SRAM (rwx)  : ORIGIN = 0x20000000,LENGTH = 128K
}

_Min_Heap_Size = 0x200;	/* required amount of heap  */
_Min_Stack_Size = 0x400;	/* required amount of stack */

SECTIONS
{
  .text :
  {
	KEEP(*(.isr_vector))
	*(.text)
	*(.text*)
	*(.rodata)
	*(.rodata*)
	. = ALIGN(4);
	_etext = .;
  } >FLASH
  
  _sidata = LOADADDR(.data);
  
  
  .data :
  {
   . = ALIGN(4);
	  _sdata = .;
	*(.data)
	*(.data*)
	. = ALIGN(4);
   	_edata = .;
  } >SRAM  AT >FLASH
  
  .bss :
  {
  . = ALIGN(4);
  	_sbss = .;
	__bss_start__ = _sbss;
	*(.bss)
	*(.bss*)
	*(COMMON)
	. = ALIGN(4);
  	_ebss = .;
	 __bss_end__ = _ebss;
  } >SRAM
  
  .heap_and_stack :
  {
    . = ALIGN(8); 
	end = .;
  
  }>SRAM
  

}

