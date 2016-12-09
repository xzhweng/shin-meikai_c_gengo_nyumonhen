/*
	右下直角の直角二等辺三角形を表示（関数版）
*/

#include <stdio.h>

/*--- 文字chをn個連続して表示 ---*/
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int main(void)
{
	int i, len;

	printf("右下直角二等辺三角形を作ります。\n");
	printf("短辺：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}

	return 0;
}
