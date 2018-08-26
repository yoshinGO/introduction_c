//nの値が0より小さければ0に更新し、100より大きければ100に更新する。0~100ならば更新しない
#include <stdio.h>

void adjust_point(int *n){
  //アジャストします
  if(*n > 100){
    *n = 100;
  }else if(*n < 0){
    *n = 0;
  }
}

int main(void){
  int na;

  printf("整数を入力してください\n");
  printf("整数A：");scanf("%d", &na);

  adjust_point(&na);//naのポインタを渡す。&naを評価して得られる値はアドレス

  puts("アジャストしました。");
  printf("整数Aは%dです\n", na);

  return 0;
}