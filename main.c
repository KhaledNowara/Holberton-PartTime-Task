#include "include/main.h"
/* Remove after testing*/
#include <stdio.h>

int main()
{

  char str1[] = "Hello\xA8World\n";


  unsigned int l_val = 123490;
  short int s_val = 32767;
  int i_val = 42;
  printf("String: %s\n", str1);
  _printf("String: %s\n", str1);

  _printf("%s\n", "Best\nSchool");

  printf("Long: %010d, Short: %ho, Int: %d\n", l_val, s_val, i_val);
  _printf("Long: %010x, Short: %ho, Int: %d\n", l_val, s_val, i_val);
  return (0);
}