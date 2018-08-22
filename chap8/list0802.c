//整数の二乗と浮動小数点数の二乗（関数形式マクロ）
#include <stdio.h>

#define sqr(x) ((x)*(x))//xの二乗値を求める関数形式マクロ

int main(void){
  int n;
  double x;

  printf("整数を入力してください：");scanf("%d", &n);
  printf("その整数の２乗値は%dです\n", sqr(n));

  printf("実数を入力してください：");scanf("%lf", &x);
  printf("その整数の２乗値は%fです\n", sqr(x));

  return 0;
}