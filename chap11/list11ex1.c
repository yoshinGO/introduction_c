//ポインタによる文字列の書き換え
#include <stdio.h>

int main(void){
  char *p = "123";

  printf("p = \"%s\"\n", p);

  p = "456" +1;//"56"が出力される

  printf("p = \"%s\"\n", p);

  return 0;
}