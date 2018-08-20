//単なるchar型が符号付きか符号無しかを判定

#include <stdio.h>
#include <limits.h>

int main(void){
  printf("この処理系のchar型は");

  if (CHAR_MIN)
    puts("符号付き型です。");//CHAR_MINは0ではない。
  else
    puts("符号無し型です。");//CHAR_MINは0である。

  return 0;
}