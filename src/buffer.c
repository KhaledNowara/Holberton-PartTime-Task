#include "../include/main.h"

/* Handle buffer operations for T6*/

char buffer[BUFFER_SIZE];

/*Current buffer Index*/
int i = 0;

/*TODO: Handle print returns, should prob change return type but not sure yet*/
int flush_buffer(){
 
    write(1, buffer, i);
    i = 0;

    /*TODO:Handle char count later*/
    return (0);
}

int add_to_buffer(char c){
    if (i == BUFFER_SIZE){
        flush_buffer();
    }
    buffer[i++] = c;
  return (0);
}
char* create_padding(int size, int zero_fill){
    char *padding = (char *)malloc(size*sizeof(char)) ;
    if (zero_fill)
    {
        int i;
        for (i=0 ;i < size - i; i++)
        {
            padding[i] = '0';
        }
    }
    else
    {
        for ( i = 0; i < size ; i++)
        {
            padding[i] = ' ';
        }
    }
   
    return padding;
}