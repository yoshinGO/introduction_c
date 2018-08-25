//全然わからん(8月24日)
#include <stdio.h>

//文字列str中の数字文字を削除する
void del_digit(char str[]){
  int i= 0;
  int idx = 0;

  while (str[i]){
    if(str[i] < '0' || str[i] > '9')//str[i]が数字文字ではない場合発動する
      str[idx++] = str[i];//右辺は文字
    printf("%s\n", str);
    printf("i = %d, idx =%d\n", i, idx);
    i++;

  }
  printf("%s\n", str);
  str[idx] = '\0';
}

int main(void){
  char str[100];

  printf("文字列を入力してください");
  scanf("%s", str);

  del_digit(str);//数字文字削除

  puts("数字文字を削除しました");
  printf("str = %s\n", str);

  return 0;
}