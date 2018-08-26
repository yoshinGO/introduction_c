//ポインタn1, n2, n3が指す三つのint型整数を昇順にソートする関数を作成
#include <stdio.h>

void sort3(int *n1, int *n2, int *n3){
  int temp;
  if(*n1 > *n2){
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;//これでn1の方が小さくなった
  }
  if(*n2 > *n3){
    temp = *n2;
    *n2 = *n3;
    *n3 = temp;//これでn2の方が小さくなった
  }
  if(*n1 > *n2){
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;//これでn1の方が小さくなった
  }

}

int main(void){
  int na, nb, nc;

  puts("三つの整数を入力してください");
  printf("整数A："); scanf("%d", &na);//scanf関数にはアドレスという値をもつポインタを渡して、そのアドレスに格納されているオブジェクトに、ユーザーから入力された値を入れる
  printf("整数B："); scanf("%d", &nb);
  printf("整数C："); scanf("%d", &nc);

  sort3(&na, &nb, &nc);

  puts("昇順にソートしました！");
  printf("整数Aは%dです\n", na);
  printf("整数Bは%dです\n", nb);
  printf("整数Cは%dです\n", nc);

  return 0;
}