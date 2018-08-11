#include <stdio.h>

int main(void){
  int i;
  int v[5] = {1, 2, 3, 4, 5};
//int v[] = {1, 2, 3, 4, 5};のように要素数は省略可能(自動的に5とみなされる)

  for (i=0; i<5; i++)
    printf("v[%d] = %d\n", i, v[i]);

  return 0;
}