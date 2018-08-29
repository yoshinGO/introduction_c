//五人の学生の「名前と身長」を身長の昇順にソート
#include <stdio.h>
#include <string.h>

#define NUMBER 5 //学生の人数
#define NAME_LEN 64 //名前の文字数

//xおよびyが指す整数の値を交換
void swap_int(int *x, int*y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

//sxおよびsyが指す文字列を変換
void swap_str(char *sx, char *sy){
  char temp[NAME_LEN];

  strcpy(temp, sx);
  strcpy(sx, sy);
  strcpy(sy, temp);
}

//配列numとstrの先頭n個の要素をnumに基づいて昇順にソート
void sort(int num[], char str[][NAME_LEN], int n){
  int i, j;

  for(i=0; i<n-1; i++){
    for(j=n-1; j>i; j--){
      if(num[j-1]>num[j]){//左の方が大きい場合に入れ替える、つまり左が小さくなる。結果、昇順になる。
        swap_int(&num[j-1], &num[j]);//numは一次元配列
        swap_str(str[j-1], str[j]);//strは二次元配列
      }
    }
  }
}

int main(void){
  int i;
  int height[] = {178, 175, 173, 165, 179};
  char name[][NAME_LEN] = {"Sato", "Sanaka", "Takao", "Mika", "Masaki"};

  for(i = 0; i<NUMBER; i++)
    printf("%2d：%-8s%4d\n", i+1, name[i], height[i]);

  sort(height, name, NUMBER);

  putchar('\n');

  puts("身長順にソートしました。");
  for(i = 0; i<NUMBER; i++)
    printf("%2d：%-8s%4d\n", i+1, name[i], height[i]);

  return 0;
}










