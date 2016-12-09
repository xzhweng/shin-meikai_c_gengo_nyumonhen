/*
	配列の全要素の平均を実数で求める
*/

#include <stdio.h>

#define  NUMBER		5		/* 要素数 */

/* 配列aの全要素の平均を実数で返す */
double ave_ary(const int a[], int n)
{
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}

int main(void)
{
	int i;
	int v[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("v[%d]：", i);
		scanf("%d", &v[i]);
	}

	printf("全要素の平均値は%.1fです。\n", ave_ary(v, NUMBER));

	return 0;
}
