//逐次検索(番兵法)

#include <stdio.h>

#define NUMBER 5 //要素数
#define FAILED -1//探索失敗

//要素数nの配列vからkeyと一致する要素を検索(番兵法)
int search(int v[], int key, int n){
  int i=0;

  v[n] = key;//番兵を格納

  while (1){
    if(v[i] == key)
      break;
    i++;
  }
  return (i<n)? i : FAILED;
}


int main(void){
  int i, ky, idx;//idxはindexのこと
  int vx[NUMBER+1];//要素数を一個多くする

  for(i = 0; i < NUMBER; i++){
    printf("vx[%d]：", i);
    scanf("%d", &vx[i]);
  }//ここのfor文で配列vxに値を入れる
  printf("探す値：");
  scanf("%d", &ky);//探したい値をkyに格納

  if((idx = search(vx, ky, NUMBER)) == FAILED)
    puts("探索に失敗しました。");
  else
    printf("%dは%d番目にあります。\n", ky, idx+1);

  return 0;
}



