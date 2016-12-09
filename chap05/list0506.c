/*
	配列の全要素を別の配列にコピー
*/

#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {17, 23, 36};	/* {17,23,36,0,0} で初期化 */
	int b[5];	

	for (i = 0; i < 5; i++)
		b[i] = a[i];

	puts("  a    b");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	return 0;
}
