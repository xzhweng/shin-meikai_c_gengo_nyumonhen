/*
	文字列をコピーする
*/
#include <stdio.h>

/*--- 文字列sをdにコピーする ---*/
char *str_copy(char *d, const char *s)
{
	int i;

	while (d[i] = s[i])
		i++;
	return d;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("コピーするのは：", tmp);
	scanf("%s", tmp);

	str_copy(str, tmp);

	puts("コピーしました。");
	printf("str = \"%s\"\n", str);

	return 0;
}
