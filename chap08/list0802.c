/*
	整数の２乗と浮動小数点数の２乗（関数形式マクロ）
*/

#include <stdio.h>

#define sqr(x)  ((x) * (x))		/* xの２乗値を求める関数形式マクロ */

int main(void)
{
	int    n;
	double x;

	printf("整数を入力してください：");
	scanf("%d", &n);
	printf("その数の２乗は%dです。\n", sqr(n));

	printf("実数を入力してください：");
	scanf("%lf", &x);
	printf("その数の２乗は%fです。\n", sqr(x));

	return 0;
}
