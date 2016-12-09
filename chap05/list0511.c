/*
	学生の点数を読み込んで最高点と最低点を表示
*/

#include <stdio.h>

#define NUMBER	5		/* 学生の人数 */

int main(void)
{
	int i;
	int tensu[NUMBER];	/* NUMBER人の学生の点数 */
	int max, min;		/* 最高点・最低点 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d番：", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (i = 1; i < NUMBER; i++) {
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("最高点：%d\n", max);
	printf("最低点：%d\n", min);

	return 0;
}
