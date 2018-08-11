#include <stdio.h>

int main(void){
  double a;
  int b;

  a = b = 1.5;
  printf("%.3f,%3d\n", a, b);
}

/////////コンパイル時にエラーが起きるというテスト