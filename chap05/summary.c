/*
	第５章のまとめ
*/

#include <stdio.h>

#define SIZE	5		/* 配列aとbの要素数 */

int main()
{
	int i, j;
	int sum;

	/* 配列aとbはint[5]型の１次元配列（要素型はintで要素数は5）*/
	int a[SIZE];
	int b[SIZE] = {1, 2, 3};

	/* 配列cはint[2][3]型の２次元配列（要素型はint[3]で要素数は2）*/
	int c[2][3] = {
		{11, 22, 33},
		{44, 55, 66},
	};

	/* 配列bの全要素をaにコピー */
	for (i = 0; i < SIZE; i++)
		a[i] = b[i];

	/* 配列aの全要素の値を表示 */
	for (i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	/* 配列bの全要素の値を表示 */
	for (i = 0; i < SIZE; i++)
		printf("b[%d] = %d\n", i, b[i]);

	/* 配列aの全要素の合計をsumに求めて表示 */
	sum = 0;
	for (i = 0; i < SIZE; i++)
		sum += a[i];
	printf("配列aの全要素の合計＝%d\n", sum); 

	/* 配列cの全構成要素の値を表示 */
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}

	return 0;
}
