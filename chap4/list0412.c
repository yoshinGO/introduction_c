//読み込んだ整数の個数だけ*を連続表示(for文)

#include <stdio.h>

int main(void){
  int num,i;

  printf("正の整数を入力してください。\n");
  scanf("%d", &num);

  for(i = 1; i<=num; i++){
    putchar('*');
  }
  printf("\n");
  return 0;
}