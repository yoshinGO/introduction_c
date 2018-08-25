//文字列"12345"を書式化して表示

#include <stdio.h>

int main(void){
  char str[] = "12345";

  printf("%s\n", str);//そのまま
  printf("%3s\n", str);//最低3桁
  printf("%.3s\n", str);//3桁まで
  printf("%8s\n", str);//最低8桁で右寄せ
  printf("%-8s\n", str);//最低8桁で左寄せ
}