//線形検索(逐次検索)

#include <stdio.h>

#define NUMBER 5 //要素数
#define FAILED -1//探索失敗

//要素数nの配列vからkeyと一致する要素を検索
int search(const int v[], int key, int n){
  int i=0;

  while(1){
    if(i ==n)//最後まで検索しても見つからなかったら失敗をリターンする
      return FAILED;
    if(v[i] ==key)//検索して見つかったなら、該当する番号を返す
      return i;
    i++;
  }
}

int main(void){
  int i, ky, idx;//idxはindexのこと
  int vx[NUMBER];

  for(i = 0; i < NUMBER; i++){
    printf("vx[%d]：", i);
    scanf("%d", &vx[i]);
  }//ここのfor文で配列vxに値を入れる
  printf("探す値：");
  scanf("%d", &ky);//探したい値をkyに格納

  idx = search(vx, ky, NUMBER);//配列と探したい値と配列の要素数を引数にして、関数を呼ぶ
  //idxには関数の返り値が代入される

  if(idx == FAILED)
    puts("探索に失敗しました。");
  else
    printf("%dは%d番目にあります。\n", ky, idx+1);

  return 0;
}



