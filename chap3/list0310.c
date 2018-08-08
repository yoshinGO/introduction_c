#include <stdio.h>

int main(void){
  int no;
  int test;
  
  printf("整数を入力してください：");
  scanf("%d", &no);

  test = (no == 5);
  printf("%d\n",test);
}