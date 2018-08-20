//型や変数の大きさを表示
#include <stdio.h>

int main(void){
  int na, nb;
  double dx, dy;

  printf("sizeof(int) = %u\n", (unsigned)sizeof(int));//sizeof演算子で生成したsize_t型の値を表示するときは(unsigned)のように必ずキャストを行う
  printf("sizeof(double) = %u\n", (unsigned)sizeof(double));

  printf("sizeof(na) = %u\n", (unsigned)sizeof(na));
  printf("sizeof(dx) = %u\n", (unsigned)sizeof(dx));

  printf("sizeof(na+na) = %u\n", (unsigned)sizeof(na+nb));
  printf("sizeof(na+dy) = %u\n", (unsigned)sizeof(na+dy));
  printf("sizeof(dx+dy) = %u\n", (unsigned)sizeof(dx+dy));
}

// sizeof(int) = 4
// sizeof(double) = 8
// sizeof(na) = 4
// sizeof(dx) = 8
// sizeof(na+na) = 4
// sizeof(na+dy) = 8
// sizeof(dx+dy) = 8