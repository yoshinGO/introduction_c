//整数値を次々と読み込んで合計と平均を表示

#include <stdio.h>

int main(void){
  int sum = 0;
  int cnt = 0;
  int retry;

  do {
    int t;
    printf("整数値を入力してください：");
    scanf("%d", &t);

    sum = sum + t;
    cnt = cnt + 1;

    printf("まだ？<yes:0/no:9>\n");
    scanf("%d", &retry);
  }while(retry == 0);

  printf("合計は%dで平均は%.2fです\n", sum, (double)sum/cnt);
}