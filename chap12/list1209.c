/*
	自動車の移動
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))

/*=== 点の座標を表す構造体 ===*/
typedef struct  {
	double x;	/* Ｘ座標 */
	double y;	/* Ｙ座標 */
} Point;

/*=== 自動車を表す構造体 ===*/
typedef struct  {
	Point  pt;		/* 現在位置 */
	double fuel;	/* 残り燃料 */
} Car;

/*--- 点paと点pbの距離を返す---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

/*--- 自動車の現在位置と残り燃料を表示 ---*/
void put_info(Car c)
{
	printf("現在位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("残り燃料：%.2fリットル\n", c.fuel);
}

/*--- cの指す車を目的座標destに移動 ---*/
int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest);	/* 移動距離 */
	if (d > c->fuel)						/* 移動距離が燃料を超過 */
		return 0;							/* 移動不可 */
	c->pt = dest;		/* 現在位置を更新（destに移動） */
	c->fuel -= d;		/* 燃料を更新（移動距離dの分だけ減る） */
	return 1;								/* 移動成功 */
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1) {
		int select;
		Point dest;			/* 目的地の座標 */

		put_info(mycar);	/* 現在位置と残り燃料を表示 */

		printf("移動しますか【Yes…1／No…0】：");
		scanf("%d", &select);
		if (select != 1) break;

		printf("目的値のＸ座標：");  scanf("%lf", &dest.x);
		printf("　　　　Ｙ座標：");  scanf("%lf", &dest.y);

		if (!move(&mycar, dest))
			puts("\a燃料不足で移動できません。");
	}

	return 0;
}
