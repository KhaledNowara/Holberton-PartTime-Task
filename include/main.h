#ifdef _PRINTF_H
#define _PRINTF_H

/*TODO: Include the libraries here*/

int _printf(const char *format, ...);

int print_char (char c);
int print_string (char *str);
int print_int (int n);
int print_binary (unsigned int n);
int print_unsigned_int (unsigned int d);
int print_octal (unsigned int n);
int print_hex (unsigned int n);
int add_to_buffer(char c);
int flush_buffer();


#endif