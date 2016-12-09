/*
	四つの整数の最大値を求める
*/

#include <stdio.h>

/*--- 大きいほうの値を返す ---*/
int max2(int a, int b)
{
	return (a > b) ? a : b;
}

/*--- 四つの整数の最大値を返す ---*/
int max4(int a, int b, int c, int d)
{
	return max2(max2(a, b), max2(c, d));
}

int main(void)
{
	int n1, n2, n3, n4;

	puts("四つの整数を入力してください。");
	printf("整数n1：");   scanf("%d", &n1);
	printf("整数n2：");   scanf("%d", &n2);
	printf("整数n3：");   scanf("%d", &n3);
	printf("整数n4：");   scanf("%d", &n4);

	printf("最も大きい値は%dです。\n", max4(n1, n2, n3, n4));

	return 0;
}
