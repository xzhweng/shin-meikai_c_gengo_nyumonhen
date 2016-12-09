/*
	二つの実数値を読み込んで和・差・積・商を実数で表示
*/

#include <stdio.h>

int main(void)
{
	double vx, vy;		/* 浮動小数点数 */

	puts("二つの実数を入力してください。");
	printf("実数vx：");   scanf("%lf", &vx);
	printf("実数vy：");   scanf("%lf", &vy);

	printf("vx + vy = %f\n",  vx + vy);
	printf("vx - vy = %f\n",  vx - vy);
	printf("vx * vy = %f\n",  vx * vy);
	printf("vx / vy = %f\n",  vx / vy);

	return 0;
}
