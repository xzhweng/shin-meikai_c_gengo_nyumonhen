/*
	４人の学生の３科目のテスト２回分の合計を求めて表示
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
	int sum[4][3];			/* 合計 */

	/* ２回分の点数の合計を求める */
	for (i = 0; i < 4; i++) {							/* ４人分の */
		for (j = 0; j < 3; j++)							/* ３科目の */
			sum[i][j] = tensu1[i][j] + tensu2[i][j];	/* ２回分を加算 */
	}

	/* １回目の点数を表示 */
	puts("１回目の点数");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu1[i][j]);
		putchar('\n');
	}

	/* ２回目の点数を表示 */
	puts("２回目の点数");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu2[i][j]);
		putchar('\n');
	}

	/* 合計点を表示 */
	puts("合計点");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}
