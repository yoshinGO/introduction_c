//文字列をコピーする(誤った例)
//実行の結果がエラーになる
#include <stdio.h>

//文字列sをdにコピーする
char *str_copy(char *d, const char *s){
  char *t = d;

  while(*d++ = *s++)
    ;
  return t;
}

int main(void){
  char *ptr = "1234";
  char tmp[128];

  printf("ptr = \"%s\" \n", ptr);

  printf("コピーするのは：");
  scanf("%s", tmp);//文字列の読み込みの際は&をつけない。なぜなら配列名tmpがポインタであるから

  str_copy(ptr, tmp);

  puts("コピーしました。");
  printf("ptr = \"%s\" \n", ptr);

  return 0;
}