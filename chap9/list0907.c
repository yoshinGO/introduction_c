//文字列の配列を読み込んで表示
#include <stdio.h>

int main(void){
  int i;
  char s[3][128];//初期化子が与えられていないため、要素数は省略できない。

  for(i = 0; i<3; i++){
    printf("s[%d]：", i);
    scanf("%s", s[i]);//要注意：scanfでも&を付けてはいけない
  }

  for(i=0; i<3; i++)
    printf("s[%d] = \"%s\"\n",i, s[i]);

  return 0;

}