//文字列の配列、つまり二次元配列
#include <stdio.h>

int str_length(const char *s){
  int len = 0;

  while(*s++)
    len++;
  return len;
}

int main(void){
  int i;
  char a[][5] = {"LISP", "C", "Ada"};//要素数は３となる
  char *p[] = {"PAUL", "X", "MAC"};//３個の初期化子が与えられているため、要素数は３となる

  for(i = 0; i<str_length(a); i++)
    printf("a[%d] = \"%s\"\n", i ,a[i]);

  for(i = 0; i<str_length(p); i++)
    printf("p[%d] = \"%s\"\n", i, p[i]);

  return 0;
}