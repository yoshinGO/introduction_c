#include <stdio.h>

int main(void){
  int i;
  int x[5];//int[5]型の配列を宣言

  for (i=0; i<5; i++){
    printf("x[%d]：", i);
    scanf("%d", &x[i]);
  }

//要素の並びを反転させる
  for(i=0; i<2; i++){
    int temp = x[i];
    x[i] = x[4-i];
    x[4-i] = temp;
  }

  puts("反転しました。");
  for(i=0; i<5; i++)
    printf("x[%d] = %d\n", i, x[i]);

  return 0;
}