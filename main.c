#include "include/main.h"
/* Remove after testing*/
#include <stdio.h>


int main()
{

    char c = 172;
    char *str = "hello " + c;
  int n = - 42949295 ;

      long int l_val = 1234567890;
    short int s_val = 32767;
    int i_val = 42;
    printf("Long: %lx, Short: %ho, Int: %d\n", l_val, s_val, i_val);
    _printf("Long: %lx, Short: %ho, Int: %d\n", l_val, s_val, i_val);
    return (0);
}