
#include "../include/main.h"

/*
 _printf function
DO NOT HANDLE ANYTHING HERE
*/

int _printf(const char *format, ...)
{

    va_list args;
    len_modifier len_modifier = NONE;
    int width = 0;
    int left_justified = 1;
    int zero_fill = 0;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            /*handle length and width modifiers*/

            if (*format == 'l')
            {
                len_modifier = L;
                format++;
            }
            else if (*format == 'h')
            {
                len_modifier = H;
                format++;
            }
            else if (*format == '.' || *format == '0')
            {
                zero_fill = 1;
                format++;
            }
            else if (*format == '-')
            {
                left_justified = 0;
                format++;
            }
            while (*format >= '0' && *format <= '9')
            {
                width = width * 10 + (*format - '0');

                format++;
            }

            switch (*format)
            {

            case 'c':

                print_char(va_arg(args, int));
                break;
            case 's':
                print_string(va_arg(args, char *));
                break;
            case 'i':
            case 'd':
                print_int(va_arg(args, long int), len_modifier, width, zero_fill, left_justified);
                break;
            case 'b':
                print_binary(va_arg(args, long unsigned int), len_modifier, width, zero_fill, left_justified);
                break;
            case 'u':
                print_unsigned_int(va_arg(args, long unsigned int), len_modifier, width, zero_fill, left_justified);
                break;
            case 'o':
                print_octal(va_arg(args, long unsigned int), len_modifier, width, zero_fill, left_justified);
                break;
            case 'x':
                print_hex_small(va_arg(args, long unsigned int), len_modifier, width, zero_fill, left_justified);
                break;
            case 'X':
                print_hex_small(va_arg(args, long unsigned int), len_modifier, width, zero_fill, left_justified);
                break;
            default:
                /*offset for the %*/
                printed_chars++;
                add_to_buffer('%');
                add_to_buffer(*format);
                break;
            }
        }
        else
        {

            add_to_buffer(*format);
        }
        printed_chars++;
        format++;
    }
    va_end(args);
    flush_buffer();
    /* should handle the old return types for the functions but I probably wont*/
    
    return (printed_chars);
}