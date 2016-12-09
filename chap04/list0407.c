/*
	読み込んだ正の整数値までカウントアップ
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", i++);		/* iの値を表示した後にインクリメント */
	printf("\n");				/* 改行 */

	return 0;
}
