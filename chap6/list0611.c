//英語の点数と数学の点数の最高点を求める

#include <stdio.h>

#define NUMBER 5 //学生の人数

//要素数nの配列vの最大値を返す
int max_of(int v[], int n){//仮引数として配列を受け取る場合は[]を付ける
  int i;
  int max = v[0];

  for (i=1; i<n; i++)
    if(v[i] > max)
      max = v[i];
    return max;
  return max;
}

int main(void){
  int i;
  int eng[NUMBER];
  int mat[NUMBER];
  int max_e, max_m;

  printf("%d人の点数を入力してください。\n", NUMBER);
  for(i=0; i<NUMBER; i++){
    printf("[%d]英語：", i+1); scanf("%d", &eng[i]);
    printf("   数学：");      scanf("%d", &mat[i]);
  }
  max_e = max_of(eng, NUMBER);
  max_m = max_of(mat, NUMBER); //実引数として配列を渡す時は[]をつけずに配列の名前だけ記述する

  printf("英語の最高点=%d\n", max_e);
  printf("数学の最高点=%d\n", max_m);

  return 0;
}