//ポインタによって身長を間接的に操作する

#include <stdio.h>

//ひろ子さんの超能力(180cm未満の身長を180cmに伸ばす)
void hiroko(int *height){//intへのポインタ型
  if(*height < 180)
    *height = 180;
}

int main(void){
  int sato = 178;//佐藤くんの身長
  int sanaka = 175;//佐中くんの身長
  int masaki = 179;//真崎くんの身長

  hiroko(&sanaka);

  printf("佐藤くんの身長：%d\n", sato);
  printf("佐中くんの身長：%d\n", sanaka);
  printf("真崎くんの身長：%d\n", masaki);

  return 0;
}
