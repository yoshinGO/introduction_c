#include <stdio.h>

#define swap(type, a, b) (type c; c = a, a = b, b = c)

int main(void){
  int a, b;

  printf("二つの整数を入力してください\n");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);
  swap(int, a, b)
  return 0;
}

できない(8月20日)