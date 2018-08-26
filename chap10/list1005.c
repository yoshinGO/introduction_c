//二つの整数の和と差を求める
#include <stdio.h>

//n1とn2の和と差を*sumと*diffに格納
void sum_diff(int n1, int n2, int *sum, int *diff){//*sumはwaのエイリアス
  *sum = n1 + n2;
  *diff = (n1>n2)? n1-n2 : n2-n1;
}

int main(void){
  int na, nb;
  int wa = 0, sa = 0;

  puts("二つの整数を入力してください。");
  printf("整数A："); scanf("%d", &na);
  printf("整数B："); scanf("%d", &nb);

  sum_diff(na, nb, &wa, &sa);//渡す時にポインタを渡す。&waを評価して得られるのがwaのアドレスである。

  printf("和は%dで差は%dです。\n", wa, sa);
}