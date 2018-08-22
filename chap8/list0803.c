//警報を発しながら表示を行うマクロ(エラーが起きる)
#include <stdio.h>

#define puts_alert(str) {putchar('\a'); puts(str);}

int main(void){
  int n;

  printf("整数を入力してください：");scanf("%d", &n);

  if (n)
    puts_alert("その数は０ではありません");
  else
    puts_alert("その数は０です。");

  return 0;
}