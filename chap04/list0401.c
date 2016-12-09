/*
	読み込んだ整数値は奇数であるか偶数であるか（好きなだけ繰り返せる）
*/

#include <stdio.h>

int main(void)
{
	int retry;		/* 処理を続けるか */

	do {
		int no;

		printf("整数を入力してください：");
		scanf("%d", &no);

		if (no % 2)
			puts("その数は奇数です。");
		else
			puts("その数は偶数です。");

		printf("もう一度？【Yes…0／No…9】：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
