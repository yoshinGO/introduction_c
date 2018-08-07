#include <stdio.h>

int main(void){
  int vx, vy;

  printf("整数を二つ入力してください\n");
  printf("整数１："); scanf("%d", &vx);
  printf("整数２："); scanf("%d", &vy);
  printf("二つの和は%dです。\n", vx+vy);
  printf("二つの差は%dです。\n", vx-vy);
  printf("二つの積は%dです。\n", vx*vy);
  printf("二つの商は%dです。\n", vx/vy);
  printf("vx%%vy = %d\n", vx%vy);
  return 0;
}