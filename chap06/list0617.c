/*
	識別子の有効範囲を確認する
*/

#include <stdio.h>

int x = 75;						/* Ａ：ファイル有効範囲 */

void print_x(void)
{
	printf("x = %d\n", x);
}

int main(void)
{
	int i;
	int x = 999;				/* Ｂ：ブロック有効範囲 */

	print_x();

	printf("x = %d\n", x);

	for (i = 0; i < 5; i++) {
		int x = i * 100;		/* Ｃ：ブロック有効範囲 */
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);

	return 0;
}
