#include <stdio.h>

int main(void){
  int a, b;

  printf("二つの整数を入力してください\n");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);

  if ((a-b)>=11 || (b-a)>=11)
    printf("それらの差は11以上です\n");
  else
    printf("それらの差は10以下です\n");
  return 0;
}