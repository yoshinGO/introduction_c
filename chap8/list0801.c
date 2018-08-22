//整数の２乗と浮動小数点数の２乗（関数）

#include <stdio.h>

//int型整数の２乗値を求める
int sqr_int(int x){
  return x * x;
}

//double型浮動小数点数の２乗値を求める
double sqr_double(double x){
  return x * x;
}

int main(void){
  int n;
  double x;

  printf("整数を入力してください：");scanf("%d", &n);
  printf("その整数の２乗値は%dです\n", sqr_int(n));

  printf("実数を入力してください：");scanf("%lf", &x);
  printf("その整数の２乗値は%fです\n", sqr_double(x));

  return 0;
}
//この調子だと型が増えていくたびに、その型に対応した関数を定義していく必要があり、似たような関数が無限に増えていってしまう。