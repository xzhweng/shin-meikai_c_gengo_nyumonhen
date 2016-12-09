/*
	浮動小数点数を何度も加算
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	float value;		/* 値 */
	float sum = 0.0f;	/* 合計 */

	puts("浮動小数点数を何度も加算します。");
	printf("値：");     scanf("%f", &value);
	printf("回数：");   scanf("%d", &no);

	for (i = 0; i < no; i++)
		sum += value;
	printf("加算結果は%fです。\n", sum);

	return 0;
}
