//負の値を入れた時に改行文字を入れないように修正
#include <stdio.h>

int main(void){
  int no, a;

  printf("正の整数を入力してください：");
  scanf("%d", &no);
  a = no;
  while(no >= 0){
    printf("%d ",no);
    no--;
  }
  if(a>=0)
    printf("\n");

  return 0;
}