#include <stdio.h>

int main(void){
  int no, a;

  printf("整数を入力してください");
  scanf("%d", &no);

  a = no;

  while (no >= 1)
    printf("%d ", no--);

  if(a>=0)
    printf("\n");

  return 0;

}