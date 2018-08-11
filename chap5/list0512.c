//学生の点数を読み込んで表示

#include <stdio.h>

#define NUMBER 80 //上限の人数

int main(void){
  int i, j;
  int num; //実際の点数
  int tensu[NUMBER];//学生の点数
  int bunpu[11] = {0};//全て０で初期化
  printf("人数を入力してください：");
  do{
    scanf("%d", &num);
    if(num<1 || num >NUMBER)
      printf("\a1~%dで入力してください：\n", NUMBER);
  }while(num<1 || num>NUMBER);//読み込む値を1~NUMBERに制限するためのdo文
  printf("%d人の点数を入力してください。\n", num);

  for (i=0; i<num; i++){
    printf("%2d番：", i +1);
    do{
      scanf("%d", &tensu[i]);
      if(tensu[i] < 0 || tensu[i]>100)//読み込む値を制限
        printf("\a0~100で入力してください：\n");
    }while(tensu[i] < 0 || tensu[i]>100);
    bunpu[tensu[i]/10]++;
  }

  puts("\n---分布グラフ---");
  printf("     100：");
  for(j=0; j<bunpu[10]; j++)
    putchar('*');
  putchar('\n');

  for (i=9; i>=0; i--){
    printf("%3d ~%3d：", i*10, i*10+9);
    for (j=0; j<bunpu[i]; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}