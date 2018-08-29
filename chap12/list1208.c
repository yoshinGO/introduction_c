//二点間の距離を求める
#include <math.h>
#include <stdio.h>

#define sqr(n) ((n)*(n))//二乗値を求める

//点の座標を表す構造体
typedef struct {
  double x;//x座標
  double y;//y座標
}Point;

//点paと点pbの距離を返す
double distance_of(Point pa, Point pb){
  return sqrt((sqr(pa.x - pb.x) + sqr(pa.y -pb.y)));
}//sqrtはmath.hに定義されている関数で、平方根を求める

int main(void){
  Point crnt, dest;

  printf("現在地のX座標："); scanf("%lf", &crnt.x);
  printf("       Y座標："); scanf("%lf", &crnt.y);
  printf("目的地のX座標："); scanf("%lf", &dest.x);
  printf("       Y座標："); scanf("%lf", &dest.y);

  printf("目的地までの距離は%.2fです。\n", distance_of(crnt, dest));

  return 0;
}
