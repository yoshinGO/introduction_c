//二つの整数の大きい方の値を求める

#include <stdio.h>

//大きい方の値を返す関数の定義
int max2(int a, int b){

  if(a>b)
    return a;
  else
    return b;

}

int main(void){

  int n1, n2;

  puts("二つの整数を入力してください");
  printf("整数１：");scanf("%d", &n1);
  printf("整数２：");scanf("%d", &n2);

  printf("大きい方の値は%dです。\n", max2(n1, n2));
}