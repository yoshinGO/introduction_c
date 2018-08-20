//文字型と整数型の大きさを表示する

#include <stdio.h>

int main(void){
  printf("sezeof(char) = %u\n", (unsigned)sizeof(char));
  printf("sezeof(short) = %u\n", (unsigned)sizeof(short));
  printf("sezeof(int) = %u\n", (unsigned)sizeof(int));
  printf("sezeof(long) = %u\n", (unsigned)sizeof(long));

  return 0;
}

// sezeof(char) = 1
// sezeof(short) = 2
// sezeof(int) = 4
// sezeof(long) = 8