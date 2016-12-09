/*
	配列の各要素を先頭から順に1,2,3,4,5で初期化して表示
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5] = {1, 2, 3, 4, 5};		/* 初期化 */

	for (i = 0; i < 5; i++)			/* 要素の値を表示 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
