#include <stdio.h>

int main(void){
  int no;
  int retry;
  do{
    printf("整数を入力してください");
    scanf("%d", &no);
    if(no%2)
      puts("入力した値は奇数です");
    else
      puts("入力した値は偶数です");
    printf("続けますか?【yes:0/no:9】");
    scanf("%d", &retry);
  }while(retry == 0);

  return 0;
}