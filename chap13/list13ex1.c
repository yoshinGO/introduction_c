//ファイルのオープンとクローズ
#include <stdio.h>

int main(void){
  FILE *fp;
  char filename[100];

  printf("開きたいファイルの名前を入力してください");
  scanf("%s", filename);

  fp = fopen(filename, "r");//ファイルのオープン

  if(fp ==NULL){
    printf("\aファイル\"%s\"をオープンできませんでした\n", filename);
  }else{
    printf("\aファイル\"%s\"をオープンしました\n", filename);
    fclose(fp);//ファイルのクローズ
  }

  return 0;
}


