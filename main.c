#include "include/main.h"
/* Remove after testing*/
#include <stdio.h>


int main()
{

    char c = 172;
    char *str = "hello " + c;
  int n = - 42949295 ;

      unsigned int l_val = 123490;
    short int s_val = 32767;
    int i_val = 42;
    printf("Long: %010d, Short: %ho, Int: %d\n", l_val, s_val, i_val);
    _printf("Long: %010x, Short: %ho, Int: %d\n", l_val, s_val, i_val);
    return (0);
}