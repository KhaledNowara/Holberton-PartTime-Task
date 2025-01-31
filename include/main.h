
#ifndef MAIN_H
#define MAIN_H
/*TODO: Include the libraries here*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
#define INT_MAX_DIGITS 10
#define INT_LONG_MAX_DIGITS 20
#define INT_SHORT_MAX_DIGITS 5
#define UINT_BIN_SHORT_MAX_DIGITS 16
#define UINT_BIN_MAX_DIGITS 32
#define UINT_BIN_LONG_MAX_DIGITS 64
#define UINT_OCT_SHORT_MAX_DIGITS 6
#define UINT_OCT_MAX_DIGITS 11
#define UINT_OCT_LONG_MAX_DIGITS 22
#define UINT_HEX_SHORT_MAX_DIGITS 4
#define UINT_HEX_MAX_DIGITS 8
#define UINT_HEX_LONG_MAX_DIGITS 16
typedef enum
{
    NONE,
    L,
    H
} len_modifier;

int _printf(const char *format, ...);

int print_char(char c);
int print_string(char *str);
int print_int(long int n, len_modifier modifier, int width, int zero_fill, int left_justified);
int print_binary(unsigned long int n, len_modifier modifier, int width, int zero_fill, int left_justified);
int print_unsigned_int(unsigned long int d, len_modifier modifier, int width, int zero_fill, int left_justified);
int print_octal(unsigned long int n, len_modifier modifier, int width, int zero_fill, int left_justified);
int print_hex_small(unsigned long int n, len_modifier modifier, int width, int zero_fill, int left_justified);
int print_hex_capital(unsigned long int n, len_modifier modifier, int width, int zero_fill, int left_justified);

int add_to_buffer(char c);
int flush_buffer();

#endif
