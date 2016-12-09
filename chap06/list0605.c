/*
	べき乗を求める
*/

#include <stdio.h>

/*--- xのn乗を返す ---*/
double power(double x, int n)
{
	int i;
	double tmp = 1.0;

	for (i = 1; i <= n; i++)
		tmp *= x;	/* tmpにxを掛ける */
	return tmp;
}

int main(void)
{
	double a;
	int b;

	printf("aのb乗を求めます。\n");
	printf("実数a：");   scanf("%lf", &a);
	printf("整数b：");   scanf("%d",  &b);

	printf("%.2fの%d乗は%.2fです。\n", a, b, power(a, b));

	return 0;
}
