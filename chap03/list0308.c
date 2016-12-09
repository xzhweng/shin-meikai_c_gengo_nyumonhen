/*
	読み込んだ整数値の最下位桁は５であるか
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("整数を入力してください：");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("最下位の桁は５です。");
	else
		puts("最下位の桁は５ではありません。");

	return 0;
}
