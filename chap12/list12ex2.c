//うまく動かないから放置

#include <stdio.h>
#include <string.h>

#define NAME_LEN 64 //名前の文字数

//学生を表す構造体の定義
typedef struct student{
  char name[NAME_LEN];//名前
  int height;//身長
  float weight;//体重
  long schols;//奨学金
}Student;//typedef宣言を用いて[struct styudent]を[Student]として扱えるようにした

//stdが指す学生の身長を180cmまで伸ばして体重を80kgまで減らす
void hiroko(Student *std){
  if(std->height <180) std->height = 180;
  if(std->weight >180) std->weight = 80;
}

//{x, y, z}の値をもつxyz構造体を返す
struct student student_of(char name, int height, float weight, long schols){
  struct student temp;

  // temp.name = name;
  strcpy(temp.name, &name);
  temp.height = height;
  temp.weight = weight;
  temp.schols = schols;

  return temp;//構造体を丸ごと返却
}

int main(void){
  Student std;
  char name[NAME_LEN];//名前
  int height;//身長
  float weight;//体重
  long schols = 0;//奨学金
  puts("生徒を登録します。");
  printf("名前：");scanf("%s", name);
  printf("身長：");scanf("%d", &height);
  printf("体重：");scanf("%f", &weight);
  printf("奨学金：");scanf("%ld", &schols);


  hiroko(&std);

  printf("氏　名 = %s\n", std.name);
  printf("身　長 = %d\n", std.height);
  printf("体　重 = %.1f\n", std.weight);
  printf("奨学金 = %ld\n", std.schols);

  return 0;
}