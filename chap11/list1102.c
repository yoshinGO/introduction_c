//配列による文字列の書き換え
//エラーのため実行は不可能
#include <stdio.h>

int main(void){
  char s[] = "ABC";

  printf("s = \"%s\"\n", s);

  s = "DEF";

  printf("s = \"%s\"\n", s);

  return 0;
}