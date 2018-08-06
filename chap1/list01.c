#include <stdio.h>

int main(void){
  int weight;
  int height;
  int area;

  puts("幅を入力してください：");
  scanf("%d", &weight);
  puts("高さを入力してください");
  scanf("%d", &height);
  area = weight * height;
  printf("面積は%dです。\n", area);
  
  return 0;
}