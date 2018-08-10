#include <stdio.h>

int main(void){
  int num;

  do{
    printf("正の整数を入力してください：");
    scanf("%d", &num);
    if(num<0)
      puts("それは負の値です。");
  }while(num<0);

  printf("%dを逆から読むと", num);

  while(num>0){
    printf("%d", num%10);
    num/=10;
  }
  printf("です。\n");

  return 0;
}