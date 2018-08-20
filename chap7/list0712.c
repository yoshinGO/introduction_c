//0.0から1.0まで0.01単位で繰り返す(整数で制御)

#include <stdio.h>

int main(void){
  int i;
  float x;
  for(i = 0; i <=100; i++){
    x = i/100.0;
    printf("x = %f\n", x);
  }
  return 0;
}
