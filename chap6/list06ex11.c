#include <stdio.h>
int cnt;

int search_index(int v[], int key, int n){
  ///断念しました8月15日
}

int main(void){
  int i,j, ky;
  int NUMBER;//要素数
  int vx[NUMBER];
  int search[cnt];

  printf("要素数を決めてください\n");
  printf("要素数："); scanf("%d", &NUMBER);

  for(i = 0; i<NUMBER; i++){
    printf("vx[%d]:", i);
    scanf("%d", &vx[i]);
  }
  printf("探す値：");
  scanf("%d", &ky);

  search[cnt] = search_index(vx, ky, NUMBER);

  printf("探した値のインデックス{");
  for (j = 0; j<cnt; j++){
    printf("%d", search[j]);
  }
  printf("}\n");

  return 0;


}