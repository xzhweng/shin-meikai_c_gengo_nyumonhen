/*
	三つの整数値を読み込んで合計値と平均値を表示
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;				/* 合計値 */
	double ave;				/* 平均値 */

	puts("三つの整数を入力してください。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);
	printf("整数c：");   scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;		/* キャスト */

	printf("それらの合計は%5dです。\n",   sum);		/* 99999形式で出力 */
	printf("それらの平均は%5.1fです。\n", ave);		/* 999.9形式で出力 */

	return 0;
}
