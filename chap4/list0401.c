//プログラムの流れの繰り返し
#include <stdio.h>

int main(void){
  int retry;

  do {
    int no;
    printf("整数を入力してください：");
    scanf("%d", &no);

    if(no%2)//答えが0なら実行しない(余りが0なら実行しない)
      puts("その数は奇数です");
    else
      puts("その数は偶数です");

    printf("もう一度？【Yes・・・0/No・・・9】：\n");
    scanf("%d", &retry);
  } while(retry==0);

  return 0;
}