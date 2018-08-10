#include <stdio.h>

int main(void){
  int i, j;
  int width, height;

  puts("長方形を作ります");
  printf("高さは：");scanf("%d", &height);
  printf("幅は：");scanf("%d", &width);
  for(i=1; i<=height; i++){
    for(j=1; j<=width; j++)
      putchar('*');
    printf("\n");
  }
  return 0;
}