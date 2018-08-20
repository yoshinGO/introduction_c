#include <stdio.h>
// #define Boolean int

int main(void){
  printf("%d\n", 125&12);

  printf("%d\n", (4 & 4));
  //ビット単位の論理演算子ではビットが共通して立っている部分を返す？？？全然挙動が分からん
  return 0;
}