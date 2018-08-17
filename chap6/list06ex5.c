//1からnまでの全整数の和

#include <stdio.h>

int sumup(int n){
  int wa = 0;

  while(n >0){
    wa += n;
    printf("今のnの値は%dです\n", n);
    n--;
  }

  return wa;
}

int main(void){
  int num;

  printf("整数を入力してください\n");
  printf("整数num："); scanf("%d", &num);

  printf("１から%dまでの全整数の和は%dです。\n", num, sumup(num));
}

