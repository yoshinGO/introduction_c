#include <stdio.h>

int main(void){
  int a[] = {1, 2, 3};
  int b[] = {4, 5, 6};

  printf("a[0] = %d\n", a[0]);

  a[0] = b[0];

  puts("書き換えました");
  printf("a[0] = %d\n", a[0]);

  return 0;
}