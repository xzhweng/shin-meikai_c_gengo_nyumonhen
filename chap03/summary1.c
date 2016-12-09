/*
	第3章のまとめ（その１）読み込んだ月の季節を表示
*/

#include <stdio.h>

int main(void)
{
	int month;					/* 月 */

	printf("何月ですか：");
	scanf("%d", &month);

	if (month < 1 || month > 12)
		printf("%d月はありませんよ!!\a\n", month);
	else if (month <= 2 || month == 12)
		printf("%d月は冬です。\n", month);
	else if (month >= 9)
		printf("%d月は秋です。\n", month);
	else if (month >= 6)
		printf("%d月は夏です。\n", month);
	else
		printf("%d月は春です。\n", month);

	return 0;
}
