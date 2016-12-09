/*
	読み込んだ整数値の最も下の桁の数字を表示
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);							/* 整数値を読み込む */

	printf("最も下の桁は%dです。\n", no % 10);

	return 0;
}
