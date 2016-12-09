/*
	第４章のまとめ
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int x, y, z;

	do {
		printf("0～100の整数値：");
		scanf("%d", &x);
	} while (x < 0 || x > 100);

	y = x;
	z = x;
	while (y >= 0)
		printf("%d %d\n", y--, ++z);

	printf("縦横が整数で面積が%d"
		   "の長方形の辺の長さ：\n", x);
	for (i = 1; i < x; i++) {
		if (i * i > x) break;      /* break文    */
		if (x % i != 0) continue;  /* continue文 */
		printf("%d × %d\n", i, x / i);
	}

	puts("5行7列のアステリスク");
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 7; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
