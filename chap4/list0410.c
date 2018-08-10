//読み込んだ正の整数値を逆順に表示
#include <stdio.h>
int main(void){
  int no;
  do{
    printf("正の整数を入力してください：");
    scanf("%d", &no);
    if(no<=0)
      puts("\a正でない数を入力しないでください。");
  }while(no<=0);
  //この時点でnoは必ず0より大きい値を持っている
  printf("その数を逆から読むと");
  while(no>0){
    printf("%d", no%10);//noを10で割ったあまり、すなわち下一桁の値が表示される
    no /=10;  //noはint型だから小数点は切り捨てられる。
  }
  puts("です。");

  return 0;
}