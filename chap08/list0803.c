/*
	警報を発しながら表示を行うマクロ（間違い：翻訳・実行不可能）
*/

#include <stdio.h>

#define puts_alert(str)  { putchar('\a'); puts(str); }

int main(void)
{
	int n;

	printf("整数を入力してください：");
	scanf("%d", &n);

	if (n)
		puts_alert("その数はゼロではありません。");
	else
		puts_alert("その数はゼロです。");

	return 0;
}
