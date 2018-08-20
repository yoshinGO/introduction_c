//文字型と整数型の表現範囲を表示する
#include <stdio.h>
#include <limits.h>

int main(void){
  puts("本環境での各文字型・整数型の値の範囲");
  printf("char               : %d~%d\n", CHAR_MIN, CHAR_MAX);
  printf("signed char        : %d~%d\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char      : %d~%d\n", 0, UCHAR_MAX);

  printf("short              : %d~%d\n", SHRT_MIN, SHRT_MIN);
  printf("int                : %d~%d\n", INT_MIN, INT_MAX);
  printf("long               : %ld~%ld\n", LONG_MIN, LONG_MAX);

  printf("unsigned short     : %u~%u\n", 0, USHRT_MAX);
  printf("unsigned int       : %u~%u\n", 0, UINT_MAX);
  printf("unsigned long      : %u~%lu\n", 0, ULONG_MAX);
  //符号無しの場合は最小値は0である。

  int i = 10000;//これは定義できる
  // long j = 9223372036854775808;//これはエラーが起きる
  return 0;
}

// 本環境での各文字型・整数型の値の範囲
// char               : -128~127
// signed char        : -128~127
// unsigned char      : 0~255
// short              : -32768~-32768
// int                : -2147483648~2147483647
// long               : -9223372036854775808~9223372036854775807
// unsigned short     : 0~65535
// unsigned int       : 0~4294967295
// unsigned long      : 0~18446744073709551615