//文字列の長さを調べる

#include <stdio.h>

//文字列の長さを返す, //constによって、受け取る配列の要素の値を変更しないことを宣言する。
int str_length(const char s[]){
  int len = 0;

  while (s[len])
    len++;
  return len;
}

int main(void){
  char str[128];//ナル文字を含めて128文字まで格納できる

  printf("文字列を入力してください：");
  scanf("%s", str);

  printf("文字列\"%s\"の長さは%dです\n", str, str_length(str));

  return 0;
}