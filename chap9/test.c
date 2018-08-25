#include <stdio.h>

int main(void){
  int s;

  printf("名前を入力してください：");
  scanf("%d", &s);

  printf("こんにちは%dさん\n", s);
}
//数字は格納できても文字列は格納できず