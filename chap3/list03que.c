#include <stdio.h>

int main(void){
  int a, b, c, min;

  puts("3の整数を入力してください");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);
  printf("整数c:"); scanf("%d", &c);

  min = a;
  if(min>b) min = b;
  if(min>c) min = c;

  printf("最小値は%dです。\n", min);
}