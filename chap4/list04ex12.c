//正の整数値をを読み込んでその桁数を表示する

#include <stdio.h>

int main(void){
  int num;
  int i=0;

  do{
    printf("正の整数を入力してください：");
    scanf("%d", &num);
    if(num<0)
      puts("それは負の値です。");
  }while(num<0);

  printf("%dの桁数は", num);

  while(num>0){
    num/=10;
    i++;
  }
  printf("%dです。\n", i);

  return 0;
}