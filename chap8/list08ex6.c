//再帰呼出しを用いずに、関数factorialを実現する
#include <stdio.h>


int factorial(int n){
  int i;
  int fact = 1;

  for(i=1; i<=n; ++i) {
    fact = fact * i;
  }
  return fact;
}

int main(void){
  int num;

  printf("整数を一つ入力してください：");
  scanf("%d", &num);

  printf("%dの階乗は%dです。\n", num, factorial(num));

  return 0;
}

/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した自然数の階乗を計算 -
 */
// #include <stdio.h>
// int main()
// {
//   int i;
//   /* 自然数 */
//   int num;
//   /* 階乗 */
//   int fact = 1;
//   /* 自然数の入力 */
//   printf("自然数を入力してください = ");
//   scanf("%d", &num);
//   /* 自然数の階乗を計算 */
//   for(i=1; i<=num; ++i) {
//     fact = fact * i;
//   };
//   /* 階乗を出力 */
//   printf("「%d」の階乗は「%d」です。\n", num, fact);
//   return 0;
// }
