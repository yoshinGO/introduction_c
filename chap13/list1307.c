//ファイルをコピーする
#include <stdio.h>

int main(void){
  int ch;
  FILE *sfp;//コピー元ファイル
  FILE *dfp;//コピー先ファイル
  char sname[FILENAME_MAX];//コピー元のファイル名
  char dname[FILENAME_MAX];//コピー先のファイル名

  printf("コピー元ファイル名：");scanf("%s", sname);
  printf("コピー先ファイル名：");scanf("%s", dname);

  if((sfp=fopen(sname, "r"))==NULL)//コピー元をオープン
    printf("\aコピー元ファイルをオープンできません\n");
  else{
    if((dfp = fopen(dname, "w")) == NULL)//コピー先をオープン
      printf("\aコピー先をオープンできません\n");
    else{
      while((ch = fgetc(sfp))!= EOF)
        fputc(ch, dfp);
      fclose(dfp);
    }
    fclose(sfp);
  }

  return 0;
}