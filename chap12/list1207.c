//5人の学生の身長を昇順にソート
#include <stdio.h>
#include <string.h>

#define NUMBER 5 //学生の人数
#define NAME_LEN 64//名前の文字数

//学生を表す構造体の定義
typedef struct student{
  char name[NAME_LEN];//名前
  int height;//身長
  float weight;//体重
  long schols;//奨学金
}Student;//typedef宣言を用いて[struct styudent]を[Student]として扱えるようにした

//xおよびyが指す学生を交換
void swap_Student(Student *x, Student *y){
  Student temp = *x;//tempの全メンバが対応するxの全メンバの値で初期化される
  *x = *y;
  *y = temp;
}

//学生の配列aの先頭n個の要素を身長の昇順にソート
void sort_by_height(Student a[], int n){
  int i, j;

  for(i=0; i<n-1; i++){
    for(j=n-1; j>i; j--){
      if(a[j-1].height > a[j].height)//大小関係はheightに基づく
      //左の方が大きい場合に入れ替える、つまり左が小さくなる。結果、昇順になる。
        swap_Student(&a[j-1], &a[j]);//名前身長体重奨学金を交換
    }
  }
}

int main(void){
  int i;
  Student std[]={
    {"Sato", 178, 61.2, 80000},
    {"Sanaka", 175, 62.5, 73000},
    {"Takao", 173, 86.2, 0},
    {"Mike", 165, 72.3, 70000},
    {"Masaki", 179, 77.5, 70000}
  };
  for(i = 0; i<NUMBER; i++)
    printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

  sort_by_height(std, NUMBER);//身長の昇順にソート

  putchar('\n');

  puts("身長順にソートしました。");
  for(i = 0; i<NUMBER; i++)
    printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

  return 0;
}