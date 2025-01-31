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
  

  
}