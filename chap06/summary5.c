/*
	配列aの要素をコピーする
*/

#include <stdio.h>

#define  NUMBER		5		/* 要素数 */

/* 配列bの先頭n個の要素をaにコピー */
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int i;
	int v1[NUMBER];			/* コピー元 */
	int v2[NUMBER];			/* コピー先 */

	for (i = 0; i < NUMBER; i++) {
		printf("v1[%d]：", i);
		scanf("%d", &v1[i]);
	}

	cpy_ary(v2, v1, NUMBER);	/* v1の全要素をv2にコピー */

	puts("配列v1の全要素をv2にコピーしました。\n");
	for (i = 0; i < NUMBER; i++) {
		printf("v2[%d]：%d\n", i, v2[i]);
	}

	return 0;
}
