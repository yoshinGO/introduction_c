//配列の受け渡し
#include <stdio.h>

//配列vの先頭n個の要素にvalを代入
void ary_set(int v[], int n, int val){
  int i;

  for(i=0; i<n; i++)
    v[i] = val;
}

int main(void){
  int i;
  int a[] = {1, 2, 3, 4, 5};

  ary_set(a, 5, 99);//引数として配列aと要素数5とval=99を渡す
  //詳しくいうと配列aを渡しているというよりかは、その配列の先頭要素へのポインタであるから、第一引数のaは&a[0]のこと

  for(i=0; i<5; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;
}