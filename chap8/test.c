//意図的にエラーを起こす
#include <stdio.h>

#define sum_of(x, y) x + y //こういう定義をすると期待とは異なる結果になってしまう

// #define sum_of(x, y) (x + y) こっちが正しい

int main(void){
  int a, b, c, d, z;

  printf("4つの整数を入力してください\n");
  printf("整数a:");scanf("%d", &a);
  printf("整数b:");scanf("%d", &b);
  printf("整数c:");scanf("%d", &c);
  printf("整数d:");scanf("%d", &d);

  z = sum_of(a, b) * sum_of(c, d);
  printf("a+b * c+d = %dです\n",z);

  return 0;
}