#include <stdio.h>

int main(void){
  int a, b, c;
  puts("三つの整数を入力してください");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);
  printf("整数c:"); scanf("%d", &c);

  if((a==b)&&(b==c))
    printf("三つの値が等しいです。\n");
  else if ((a==b)||(b==c)||(c==a))
    printf("二つの値が等しいです。\n");
  else
    printf("三つの値は異なります。\n");


  return 0;
}