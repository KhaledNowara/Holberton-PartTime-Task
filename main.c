#include "include/main.h"
/* Remove after testing*/
#include <stdio.h>

int main()
{
_printf("Char: %c\n", 'A');  
_printf("String: %s\n", "Hello");  
_printf("Empty String: %s\n", "");  

_printf("Integer: %d\n", 42); 
_printf("Negative Integer: %i\n", -12345);  
_printf("Zero: %d\n", 0);  
_printf("Large Integer: %d\n", 2147483647); 
_printf("Small Integer: %d\n", -2147483648);  
_printf("Unsigned: %u\n", 4294967295U);  
_printf("Zero Unsigned: %u\n", 0);  
_printf("Octal: %o\n", 64); 
_printf("Octal Zero: %o\n", 0);  
_printf("Hex (lowercase): %x\n", 255);  
_printf("Hex (uppercase): %X\n", 255); 
_printf("Hex Zero: %x\n", 0); 
_printf("Hex (lowercase): %x\n", 255);  
_printf("Hex (uppercase): %X\n", 255);  
_printf("Hex Zero: %x\n", 0);  
_printf("Binary: %b\n", 5);  
_printf("Binary Zero: %b\n", 0); 
_printf("Long: %ld\n", 9223372036854775807L); 
_printf("Unsigned Long: %lu\n", 18446744073709551615UL);  
_printf("Long Hex: %lx\n", 0xFFFFFFFFFFFFFFFF);  
_printf("Long Octal: %lo\n", 0777777777777777777777L);  

  _printf("Short: %hd\n", (short)32767);  
_printf("Unsigned Short: %hu\n", (unsigned short)65535);
_printf("Short Octal: %ho\n", (unsigned short)65535);  
_printf("Short Hex: %hx\n", (unsigned short)65535);  

  return (0);
}