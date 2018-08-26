//二つの整数値を交換する

#include <stdio.h>

//pxとpyが指すオブジェクトの値を交換
void swap(int *px, int *py){
  int temp = *px;
  *px = *py;
  *py = temp;
  puts("入れ替えました！");
}

int main(void){

  int na, nb;

  puts("二つの整数を入力してください");
  printf("整数A："); scanf("%d", &na);
  printf("整数B："); scanf("%d", &nb);

  swap(&na, &nb);//ポインタを渡す、評価して得られる値はアドレス

  printf("整数A：%d\n", na);
  printf("整数B：%d\n", nb);

  return 0;

}