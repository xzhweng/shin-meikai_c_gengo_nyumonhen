/*
	文字列の長さを調べる（ポインタによる走査）
*/

#include <stdio.h>

/*--- 文字列sの長さを返す ---*/
int str_length(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return len;
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	printf("文字列\"%s\"の長さは%dです。\n", str, str_length(str));

	return 0;
}
