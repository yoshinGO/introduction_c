//呼び出された回数をカウントする関数

#include <stdio.h>

int cnt;//静的記憶域期間を与えられる。0で初期化

void put_count(void){
  printf("put_count：%d回目\n", ++cnt);
}

int main(void){
  int i;
  for(i=0; i<5; i++)
    put_count();
  return 0;
}