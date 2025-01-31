
#include "../include/main.h"
/*ad includes to the header file but its not working now*/


/*
 _printf function 
DO NOT HANDLE ANYTHING HERE 
*/

int _printf(const char *format, ...){

    va_list args;
    va_start(args, format);

    while (*format){
        if (*format == '%'){
            format++;
            switch (*format){
                case 'c':
                    print_char(va_arg(args, int));
                    break;
                case 's':
                    print_string(va_arg(args, char *));
                    break;
                case 'i':
                case 'd':
                    print_int(va_arg(args, int));
                    break;
                case 'b':
                    print_binary(va_arg(args, unsigned int));
                    break;
                case 'u':
                    print_unsigned_int(va_arg(args, unsigned int));
                    break;
                case 'o':
                    print_octal(va_arg(args, unsigned int));
                    break;
                case 'x':
                    print_hex(va_arg(args, unsigned int));
                    break;
                default:
                    add_to_buffer('%');
                    add_to_buffer(*format);
                    break;
            }
        } else {
            add_to_buffer(*format);
        }
        format++;
    }


}