#include <stdio.h>

int main(void){
  short x, y, z;
  x = 30000;
  y = 20000;
  z = x + y;
  printf("%d\n", z);
}//-15536
// short              : -32768~-32768
//何故か65536で割った余りがzに代入される
//よく分からない挙動である