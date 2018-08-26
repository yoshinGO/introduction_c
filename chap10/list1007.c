//二つの整数を昇順に並べる
#include <stdio.h>

//pxとpyが指すオブジェクトの値を交換
void swap(int *px, int *py){
  int temp = *px;
  *px = *py;
  *py = temp;
}

//*n1<*n2となるように並べる
void sort2(int *n1, int *n2){
  printf("n1 = %p\n", n1);//n1は変数へのポインタ
  if(*n1 > *n2)
    swap(n1, n2);//&は不要
}

int main(void){
  int na, nb;

  puts("二つの整数を入力してください");
  printf("整数A："); scanf("%d", &na);
  printf("整数B："); scanf("%d", &nb);

  sort2(&na, &nb);

  puts("昇順にソートしました");
  printf("整数Aは%dです\n", na);
  printf("整数Bは%dです\n", nb);

  return 0;
}