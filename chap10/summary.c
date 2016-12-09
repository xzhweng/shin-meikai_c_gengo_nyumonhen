/*
	学生の点数を読み込んで昇順にソート
*/

#include <stdio.h>

#define NUMBER	5		/* 人数 */

/*--- pxとpyが指すオブジェクトの値を交換 ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/*--- バブルソート ---*/
void bsort(int a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		for (j = n - 1; j > i; j--)
			if (a[j - 1] > a[j])
				swap(&a[j], &a[j - 1]);
}

int main(void)
{
	int i;
	int point[NUMBER];		/* NUMBER人の学生の点数 */

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d番：", i + 1);
		scanf("%d", &point[i]);
	}

	bsort(point, NUMBER);		/* ソート */

	puts("昇順にソートしました。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d番：%d\n", i + 1, point[i]);

	return 0;
}
