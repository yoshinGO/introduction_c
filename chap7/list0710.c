//２点間の距離も求める
#include <stdio.h>
#include <math.h>

//点(x1, y1)と点(x2, y2)の距離を求める
double dist(double x1, double y1, double x2, double y2){
  return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int main(void){
  double x1, y1; //点1
  double x2, y2; //点2

  printf("二点間の距離を求めます\n");
  printf("点1・・・X座標"); scanf("%lf", &x1);
  printf("   ・・・Y座標"); scanf("%lf", &y1);
  printf("点2・・・X座標"); scanf("%lf", &x2);
  printf("   ・・・Y座標"); scanf("%lf", &y2);

  printf("距離は%fです。\n", dist(x1, y1, x2, y2));
}

//９の平方根は３および−３.
//【平方】ある数を二度掛け合わせること。二乗。自乗。