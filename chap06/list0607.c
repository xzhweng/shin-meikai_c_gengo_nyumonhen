/*
	左下直角の直角二等辺三角形を表示（関数版）
*/

#include <stdio.h>

/*--- 記号文字'*'をn個連続して表示 ---*/
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int i, len;

	printf("左下直角二等辺三角形を作ります。\n");
	printf("短辺：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}
