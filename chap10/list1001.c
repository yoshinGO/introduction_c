//二つの整数の和と差を求める(間違い)
#include <stdio.h>
//n1とn2の和と差をsuとdiffに格納(間違い)
void sum_diff(int n1, int n2, int sum, int diff){
  sum = n1 + n2;//和
  diff = (n1 > n2)? n1-n2 : n2-n1;//差
  //n1の方が大きければ左側の式を評価、n1の方が小さければ右側の式を評価
}

int main(void){
  int na, nb;
  int wa = 0, sa = 0;

  puts("二つの整数を入力してください。");
  printf("整数A："); scanf("%d", &na);
  printf("整数B："); scanf("%d", &nb);

  sum_diff(na, nb, wa, sa);

  printf("和は%dで差は%dです。\n", wa, sa);

  return 0;
}