//標準入力からの入力を標準出力にコピーする
#include <stdio.h>

int main(void){
  int ch;

  while((ch = getchar()) != EOF)
    putchar(ch);

  return 0;
}

//getchar 関数は標準入力から1文字分文字を読み取ります．(文字は unsigned char型として取り込まれ，int型に変換されて戻り値になります．)