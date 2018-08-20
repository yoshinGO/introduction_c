//0.0から1.0まで0.01単位で繰り返す
#include <stdio.h>

int main(void){
  float x;
  for(x =0.0; x <=1.0; x += 0.01)//誤差が生じる
    printf("x = %f\n", x);

  return 0;
}