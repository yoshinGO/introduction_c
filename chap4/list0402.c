#include <stdio.h>

int main(void){
  int hand;

  do{
    printf("手を選んでください[0:ぐー, 1:ちょき, 2:ぱー]");
    scanf("%d", &hand);
  }while(hand<0 || hand>2);//適した値が入力されるまではループをする。
  // !(hand>=0 && hand<=2);と同じ意味
  printf("あなたは");
  switch(hand){
    case 0:printf("ぐー"); break;
    case 1:printf("ちょき"); break;
    case 2:printf("ぱー"); break;
  }
  printf("を選びました。\n");

  return 0;

}