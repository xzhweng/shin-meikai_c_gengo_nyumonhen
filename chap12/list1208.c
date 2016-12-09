/*
	２点間の距離を求める
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))		/* ２乗値を求める */

/*=== 点の座標を表す構造体 ===*/
typedef struct  {
	double x;	/* Ｘ座標 */
	double y;	/* Ｙ座標 */
} Point;

/*--- 点paと点pbの距離を返す---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void)
{
	Point crnt, dest;

	printf("現在地のＸ座標：");   scanf("%lf", &crnt.x);
	printf("　　　　Ｙ座標：");   scanf("%lf", &crnt.y);
	printf("目的値のＸ座標：");   scanf("%lf", &dest.x);
	printf("　　　　Ｙ座標：");   scanf("%lf", &dest.y);

	printf("目的値までの距離は%.2fです。\n", distance_of(crnt, dest));

	return 0;
}
