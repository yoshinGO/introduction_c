//文字列の配列
#include <stdio.h>

int main(void){
  int i;
  char cs[][6] = {"Turbo", "NA", "DOHC"};//3個の初期化子が与えられているため、要素数は３となる。

  for(i = 0; i < 3; i++)
    printf("cs[%d] = \"%s\"\n",i, cs[i]);

  return 0;
}