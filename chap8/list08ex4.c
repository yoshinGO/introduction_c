//バブルソートの走査を先頭から行う
#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n){
  int i, j;
  for(i = n-1; i >0; i--){
    for(j = 0; j < i; j++){
      if(a[j] > a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}

int main(void){
  int i, j;
  int height[NUMBER];

  printf("%d人の身長を入力してください\n", NUMBER);
  for(i = 0; i <NUMBER; i++){
    printf("%d番：", i+1);
    scanf("%d", &height[i]);
  }

  bsort(height, NUMBER);

  printf("データを昇順に並べました\n");
  for (j=0; j<NUMBER; j++){
    printf("%2d番：%d\n", j+1, height[j]);
  }
  return 0;
}