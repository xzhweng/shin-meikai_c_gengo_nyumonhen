/*
	読み込んだ整数値を０までカウントダウン（その２）
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d ", no--);	/* noの値を表示した後にデクリメント */
	printf("\n");				/* 改行 */

	return 0;
}
