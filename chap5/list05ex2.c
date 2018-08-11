#include <stdio.h>

int i;
int v[5];

int main(void){
  for(i=5; i>0; i--){
  v[(5-i)] = i;
}

  for(i=0; i<5; i++){
    printf("v[%d] = %d\n", i, v[i]);
  }
  return 0;
}