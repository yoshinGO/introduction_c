#include <stdio.h>

int main(void){
  int a, b, souwa, min, max;
  souwa = 0;

  printf("二つの整数を入力してください\n");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);
  //処理
  if(a>b){
    max = a;
    min = b;
  }else{
    max = b;
    min = a;
  }

  do{
    souwa = souwa + min;
    min = min + 1;
  }while (!(min == (max+1)));

  if(a>b){
    max = a;
    min = b;
  }else{
    max = b;
    min = a;
  }
  printf("%d以上%d以下の全整数の和は%dです\n",min, max, souwa);
}