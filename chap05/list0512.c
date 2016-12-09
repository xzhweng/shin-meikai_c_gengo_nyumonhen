/*
	学生の点数を読み込んで分布を表示
*/

#include <stdio.h>

#define NUMBER	80		/* 人数の上限 */

int main(void)
{
	int i, j;
	int num;				/* 実際の人数 */
	int tensu[NUMBER];		/* 学生の点数 */
	int bunpu[11] = {0};	/* 点数の分布 */

	printf("人数を入力してください：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1～%dで入力してください：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力してください。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d番：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a1～100で入力してください：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---分布グラフ---");
	printf("      100：");

	for (j = 0; j < bunpu[10]; j++)			/* 100点 */
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {				/* 100点未満 */
		printf("%3d ～%3d：", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
