//文字列の配列を表示(関数版：1文字ずつ走査)
#include <stdio.h>
//文字列の配列を表示(1文字ずつ表示)
void put_strary(const char s[][6], int n){
  int i;
  for(i = 0; i < n; i++){
    int j = 0;//このタイミングでjを初期化
    printf("s[%d] = \"", i);// 「\"」でダブルクウォーテーションを表現できる
    while(s[i][j])
      putchar(s[i][j++]);//iで配列を指定して、jでぐるぐる回す
    puts("\"");
  }
}

int main(void){
  char cs[][6] = {"Turbo", "NA", "DOHC"};

  put_strary(cs, 3);

  return 0;
}