

/*TODO: Include the libraries here*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

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

