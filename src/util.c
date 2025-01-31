
#include "main.h"

/*
Helper functions to handle the different format specifiers

Return the number of characters printed

*/

/*TODO: Handle length modifiers, field width, field precision, and - flag
Tasks 9-11
*/

/* handle %c  print a character*/
int print_char(char c)
{
    if (c < 32 || c > 126)
    {

        add_to_buffer('\\');
        add_to_buffer('x');
        print_hex_small(c);
    }
    else
    {
        add_to_buffer(c);
    }
    return (0);
}

/* handle %s  print a string*/
int print_string(char *str)
{

    while (*str)
    {
        printf("str: %c\n", *str);
        print_char(*str);
        str++;
    }
    /*TODO: Handle non printable characters \x + character code*/
}

/*handle %i %d print a signed integer*/
int print_int(int n)
{
    if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {
        if (n < 0)
        {
            add_to_buffer('-');
            n = -n;
        }

        /* Max signed int is 2^31 -1, 10 digits
        Add digits to a buffer and reverse the buffer
        */

        char reverse_buffer[INT_MAX_DIGITS];
        int i = 0;
        while (n > 0)
        {
            /*
            + '0' To convert to a char with the correct acsii code
            */
            reverse_buffer[i++] = n % 10 + '0';
            n = n / 10;
        }

        while (i >= 0)
        {
            add_to_buffer(reverse_buffer[--i]);
        }
    }
}

/*handle %b print a binary unsigned int*/
int print_binary(unsigned int n)
{
    if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {
        // Max unsigned int is 2^32 , 32 digits 32 bits for binary

        char reverse_buffer[UINT_BIN_MAX_DIGITS];
        int i = 0;
        
        while (n > 0)
        {   
            reverse_buffer[i++] = n % 2 + '0';
            n = n / 2;
        }
        while (i > 0)
        {
            add_to_buffer(reverse_buffer[--i]);
        }
       

        
    }
}

/*handle %u print unsigned int*/
int print_unsigned_int(unsigned int n)
{
   if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {

        /* Max unsigned int is 2^32 -1, 10 digits
        Add digits to a buffer and reverse the buffer
        */

        char reverse_buffer[INT_MAX_DIGITS];
        int i = 0;
        while (n > 0)
        {
            /*
            + '0' To convert to a char with the correct acsii code
            */
            reverse_buffer[i++] = n % 10 + '0';
            n = n / 10;
        }

        while (i >= 0)
        {
            add_to_buffer(reverse_buffer[--i]);
        }
    }
}

/*handle %o print octal unsigned int*/
int print_octal(unsigned int n)
{
    if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {
        
        char reverse_buffer[UINT_OCT_MAX_DIGITS];
        int i = 0;
        
        while (n > 0)
        {   
            reverse_buffer[i++] = n % 8 + '0';
            n = n / 8;
        }
        while (i > 0)
        {
            add_to_buffer(reverse_buffer[--i]);
        }
       

        
    }
    return (0);
}

/*handle %x print hexadecimal unsigned int*/
int print_hex_small(unsigned int n)
{
    if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {
        
        char reverse_buffer[UINT_HEX_MAX_DIGITS];
        int i = 0;
        
        while (n > 0)
        {   
            int remainder = n % 16;
            if (remainder < 10)
            {
                reverse_buffer[i++] = remainder + '0';
            }
            else
            {
                reverse_buffer[i++] = remainder - 10 + 'a';
            }
            n = n / 16;
        }
        while (i > 0)
        {
            add_to_buffer(reverse_buffer[--i]);
        }
       

        
    }
    return (0);
}

/*handle %X print hexadecimal unsigned int*/
int print_hex_capital(unsigned int n)
{
    if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {
        
        char reverse_buffer[UINT_HEX_MAX_DIGITS];
        int i = 0;
        
        while (n > 0)
        {   
            int remainder = n % 16;
            if (remainder < 10)
            {
                reverse_buffer[i++] = remainder + '0';
            }
            else
            {
                reverse_buffer[i++] = remainder - 10 + 'A';
            }
            n = n / 16;
        }
        while (i > 0)
        {
            add_to_buffer(reverse_buffer[--i]);
        }
       

        
    }
    return (0);
}
