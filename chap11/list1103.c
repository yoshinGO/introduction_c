//ポインタによる文字列の書き換え
#include <stdio.h>

int main(void){
  char *p = "123";

  printf("p = \"%s\"\n", p);

  p = "456";//エラーなく書き換えできる

  printf("p = \"%s\"\n", p);

  return 0;
}