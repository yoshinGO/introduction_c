//静的記憶域期間をもつオブジェクトの暗黙の初期化を確認

#include <stdio.h>

int fx;//静的記憶域期間、0で初期化される

int main(void){
  int i;//動的記憶域期間、iを不定値で初期化

  //以下は静的記憶域期間を与えられる
  static int si;//0で初期化される
  static double sd;//0.0で初期化される
  static int sa[5];//全要素を0で初期化

  printf("i = %d\n", i);
  printf("fx = %d\n", fx);
  printf("si = %d\n", si);
  printf("sd = %.2f\n", sd);

  for(i=0; i<5; i++)
    printf("sa[%d]=%d\n", i, sa[i]);

  return 0;
}