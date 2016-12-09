/*
	読み込んだ整数値を３で割った剰余を表示
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if (no % 3 == 0)
		puts("その数は３で割り切れます。");
	else if (no % 3 == 1)
		puts("その数を３で割った剰余は１です。");
	else
		puts("その数を３で割った剰余は２です。");

	return 0;
}
