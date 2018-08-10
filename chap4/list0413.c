//指定された個数だけ整数を読み込んで合計値と平均値を表示
#include <stdio.h>

int main(void){
  int num;
  int i, tmp;
  int sum=0, cnt=0;

  printf("何個の整数を入力しますか？：");
  scanf("%d", &tmp);

  for(i = 1; i<=tmp; i++){
    printf("No%d:", i);
    scanf("%d", &num);
    sum +=num;
    cnt +=1;
  }
  printf("合計値は%dで、平均値は%.2fです。\n", sum, (double)sum/cnt);
}