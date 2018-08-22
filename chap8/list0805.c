//学生の身長を読み込んでソート
#include <stdio.h>

#define NUMBER 5 //人数

//バブルソート
void bsort(int a[], int n){
  int i, j;

  for(i = 0; i < n-1; i++){//全部でn-1パス
    for(j = n-1; j >i; j--){//末尾から先頭側へ走査
      if(a[j-1] >a[j]){
        int temp =a[j];
        a[j] = a[j-1];
        a[j-1] = temp;//着目した２要素の左側が大きければ交換
      }
    }
  }
}

int main(void){
  int i;
  int height[NUMBER];//NUBER人の学生の身長
  printf("%d人の身長を入力してください\n", NUMBER);
  for(i = 0; i < NUMBER; i++){
    printf("%2d番：", i+1);
    scanf("%d", &height[i]);
  }

  bsort(height, NUMBER);

  puts("昇順にソートしました。");
  for(i = 0; i< NUMBER; i++)
    printf("%2d番 ： %d\n",i+1, height[i] );

  return 0;
}