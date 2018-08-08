#include <stdio.h>
int main(void){
  int a, b, c, max;
//読み込んだ整数値の符号を判定する
  puts("二つの整数を入力してください");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);

  // printf("それらの差は%dです。\n",(a>b)? a-b : b-a );

  if(a>b)
    printf("それらの差は%dです。\n", a-b);
  else
    printf("それらの差は%dです。\n", b-a);

  return 0;
}

