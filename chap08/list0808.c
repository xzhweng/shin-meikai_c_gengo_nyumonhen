/*
	標準入力からの入力を標準出力にコピーする
*/

#include <stdio.h>

int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}
