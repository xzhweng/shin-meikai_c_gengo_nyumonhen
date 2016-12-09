/*
	読み込んだ整数値はゼロかどうか
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("整数を入力してください：");
	scanf("%d", &num);

	if (num)
		puts("その数はゼロではありません。");
	else
		puts("その数はゼロです。");

	return 0;
}
