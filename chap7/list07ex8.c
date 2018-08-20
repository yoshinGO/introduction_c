#include <stdio.h>

int main(void){
  float a;
  double b;
  long double c;
  
  printf("float = %u\n", (unsigned)sizeof(a));
  printf("double = %u\n", (unsigned)sizeof(b));
  printf("long double = %u\n", (unsigned)sizeof(c));
  putchar('\n');

  return 0;
}