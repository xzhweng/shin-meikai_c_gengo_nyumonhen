/*
	読み込んだ正の整数値までカウントアップ（for文）
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
		printf("%d ", i);
	putchar('\n');		/* 改行 */

	return 0;
}
