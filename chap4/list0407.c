//読み込んだ性の整数値までカウントアップ
#include <stdio.h>

int main(void){
  int num, i;
  i = 0;
  printf("正の整数値を入力してください。");
  scanf("%d", &num);

  while(num>=i)
    printf("%d ", i++);
  printf("\n");
  return 0;
}