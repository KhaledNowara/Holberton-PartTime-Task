
#include "main.h"

/*
Helper functions to handle the different format specifiers

Return the number of characters printed

*/


/*TODO: Handle length modifiers, field width, field precision, and - flag 
Tasks 9-11
*/


/* handle %c  print a character*/
int print_char (char c){
    if (c < 32 || c > 126){
        
        add_to_buffer('\\');
        add_to_buffer('x');
        print_hex(c);
    } else {
    add_to_buffer(c);
    }
    return (0);

}

/* handle %s  print a string*/
int print_string (char *str){

    while (*str){
        printf("str: %c\n", *str);
        print_char(*str);
        str++;
    }
    /*TODO: Handle non printable characters \x + character code*/

}

/*handle %i %d print a signed integer*/
int print_int (int n){
        return (0);

}

/*handle %b print a binary unsigned int*/
int print_binary (unsigned int n){
    return (0);

}


/*handle %u print unsigned int*/
int print_unsigned_int (unsigned int d){
        return (0);

}

/*handle %o print octal unsigned int*/
int print_octal (unsigned int n){
        return (0);

}

/*handle %x print hexadecimal unsigned int*/
int print_hex (unsigned int n){
    return (0);
}




