/*
	読み込んだ整数値を０までカウントダウン
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;			/* noの値をデクリメント */
	}
	printf("\n");		/* 改行 */

	return 0;
}
