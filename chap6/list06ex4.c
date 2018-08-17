#include <stdio.h>

//int型整数の４乗値を返す

int sqr(int x){
  return x * x;
}

int pow4 (int x){
  return sqr(x) * sqr(x);
}

int main(void){
  int num;
  printf("整数を入力してください\n");
  printf("整数num：");scanf("%d", &num);
  printf("その整数を４乗した数は%dです\n", pow4(num));

  return 0;
}