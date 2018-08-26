//配列の要素のアドレス(要素へのポインタ)を表示
#include <stdio.h>

int main(void){
  int i;
  int a[5] = {1, 2, 3, 4, 5};
  int *p = a; //pはa[0]を指す

  for(i = 0; i<5; i++)
    printf("&a[%d] = %p  p+%d = %p \n", i, &a[i], i, p+i);
//アドレスが表示される

  for(i = 0; i<5; i++)
    printf("*(&a[%d]) = %d  *(p+%d) = %d \n", i, *(&a[i]), i, *(p+i));
  //ポインタpに間接演算子*をつけると要素を取得できる
  return 0;
}