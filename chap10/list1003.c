//ポインタによって身長を間接的に操作する

#include <stdio.h>

int main(void){
  int sato = 178;//佐藤くんの身長
  int sanaka = 175; //佐中くんの身長
  int masaki = 179; //真崎くんの身長

  int *isako, *hiroko;

  isako = &sato; //isakoはsatoを指す(佐藤くんが好き)
  hiroko = &masaki; //hirokoはmasakiを指す(真崎くんが好き)

  printf("いさ子さんの好きな人の身長：%d\n", *isako);
  printf("ひろ子さんの好きな人の身長：%d\n", *hiroko);//*hirokoはmasakiのエイリアス

  isako = &sanaka; //isakoはsanakaを指す（気が変わった）

  *hiroko = 180;

  putchar('\n');
  printf("佐藤くんの身長：%d\n", sato);
  printf("佐中くんの身長：%d\n", sanaka);
  printf("真崎くんの身長：%d\n", masaki);
  printf("いさ子さんの好きな人の身長：%d\n", *isako);
  printf("ひろ子さんの好きな人の身長：%d\n", *hiroko);

  return 0;

}