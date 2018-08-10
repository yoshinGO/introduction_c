#include <stdio.h>

int main(void){
  int i, j,ue,hidari, seki;
  hidari = 1;
  for (i=0; i<=9; i++){
    if(i>=1){
    for (j=1; j<=9; j++){
      if(j==1){
        printf("%3d", hidari++);
        printf(" |");
      }
      seki = i*j;
      printf("%3d", seki);
    }
    printf("\n");
    }else if(i==0){
      printf("    |");
      for(ue = 1; ue<=9; ue++){
        printf("%3d", ue);
      }
      printf("\n");
      printf("  --+-------------------------\n");
    }
  }
  return 0;
}