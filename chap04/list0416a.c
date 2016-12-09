/*
	九九の表を表示（40より大きい数に出会うとbreak文を実行）
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int seki = i * j;
			if (seki > 40)
				break;
			printf("%3d", seki);
		}
		putchar('\n');				/* 改行 */
	}

	return 0;
}
