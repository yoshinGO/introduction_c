//左下が直角の直角二等辺三角形を表示
#include <stdio.h>

int main(void){
  int i, j, len;
  puts("左下直角二等辺三角形を作ります");
  printf("短辺：");
  scanf("%d", &len);

  for(i=1; i<=len; i++){
    for(j=1; j<=i; j++)
      putchar('*');
    putchar('\n');
  }//n行目にn個の*を表示することで直角三角形を実現している

  return 0;
}