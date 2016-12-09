/*
	三つの整数の最大値を求める
*/

#include <stdio.h>

/*--- 三つの整数の最大値を返す ---*/
int max3(int a, int b, int c)
{
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main(void)
{
	int a, b, c;

	puts("三つの整数を入力してください。");
	printf("整数a：");	  scanf("%d", &a);
	printf("整数b：");	  scanf("%d", &b);
	printf("整数c：");	  scanf("%d", &c);

	printf("最大値は%dです。\n", max3(a, b, c));

	return 0;
}
