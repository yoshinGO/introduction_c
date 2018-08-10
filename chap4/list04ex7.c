//２のベキ乗の数を表示するプログラム

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
  int num, i;

  printf("正の整数を入力してください：");
  scanf("%d", &num);

  i = 1;
  while(i<=num)
    printf("%.1f ", pow(2.0, i++));

  printf("\n");
  return 0;
}

// double d3 = pow(x, 3.0); // 3乗
// double d4 = pow(x, 4.0); // 4乗