/*
	九九の表を表示（4を含む数に出会うとcontinue文を実行）
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int seki = i * j;
			if (seki % 10 == 4 || seki / 10 == 4) {
				printf("   ");
				continue;
			}
			printf("%3d", seki);
		}
		putchar('\n');		/* 改行 */
	}

	return 0;
}
