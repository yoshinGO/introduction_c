//超能力をもったひろ子さん(構造体にtypedef名を導入)

#include <stdio.h>

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

int main(void){
  Student sanaka={"Sanaka", 175, 62.5, 73000};

  hiroko(&sanaka);

  printf("氏　名 = %s\n", sanaka.name);
  printf("身　長 = %d\n", sanaka.height);
  printf("体　重 = %.1f\n", sanaka.weight);
  printf("奨学金 = %ld\n", sanaka.schols);

  return 0;
}