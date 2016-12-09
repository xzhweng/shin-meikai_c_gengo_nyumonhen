/*
	第８章のまとめ（関数形式マクロ・コンマ演算子・文字の入出力など）
*/

#include <stdio.h>

/* 警報を発する */
#define alert() (putchar('\a'))

/* 文字cを表示して改行 */
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{
	int ch;
	int sum = 0;	/* すべての数字の合計 */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n') {
			alert();
			putchar('\n');
		} else {
			putchar_ln(ch);
		}
	}

	printf("数字文字の合計は%dです。\n", sum);

	return 0;
}
