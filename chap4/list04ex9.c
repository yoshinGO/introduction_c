#include <stdio.h>

int main(void){
  int num, i;
  printf("正の整数を入力してください");
  scanf("%d", &num);

  i = 0;
  while(i <= num){
    if(i%2)
      putchar('-');
    else
      putchar('+');
    i++;
  }

  if(num>0) printf("\n");

  return 0;
}