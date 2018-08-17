//三つのint型整数の最小値を返す関数
#include <stdio.h>

int min3(int a, int b, int c){
  int min = a;
  if(b < min) min = b;
  if(c < min) min = c;

  return min;
}

int main(void){
  int a, b, c;

  puts("整数を三つ入力してください");
  printf("整数a："); scanf("%d", &a);
  printf("整数b："); scanf("%d", &b);
  printf("整数c："); scanf("%d", &c);

  printf("最小の整数は%dです。\n", min3(a, b, c));
}