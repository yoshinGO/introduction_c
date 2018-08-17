//識別子の有効範囲を確認する
#include <stdio.h>

int x = 75; //ファイル有効範囲

void print_x(void){
  printf("x = %d\n", x);//75
}

int main(void){
  int i;
  int x = 999; //ブロック有効範囲

  print_x();

  printf("x = %d\n", x);//999

  for(i=0; i<5; i++){
    int x = i*100; //ブロック有効範囲
    printf("x = %d\n", x);//0, 100, 200, 300, 400
  }

  printf("x = %d\n", x);//999

  return 0;
}