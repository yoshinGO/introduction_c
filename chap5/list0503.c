//配列の各要素に先頭から順に1,2,3,4,5を代入して表示(for文)
#include <stdio.h>

int main(void){
  int i;
  int v[5];

  for (i=0; i<5; i++)
    v[i] = i+1;

  for (i=0; i<5; i++)
    printf("v[%d] = %d\n",i, v[i]);

  return 0;
}