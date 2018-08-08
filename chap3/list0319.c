// switch文を使う
#include <stdio.h>

int main(void){
  int no;
  printf("整数を入力してください\n");
  scanf("%d", &no);

  switch(no%3){
    case 0: puts("その数は３で割り切れます");break;
    case 1: puts("その数を３で割った余りは１です");break;
    case 2: puts("その数を3で割った余りは２です");break;
  }
}