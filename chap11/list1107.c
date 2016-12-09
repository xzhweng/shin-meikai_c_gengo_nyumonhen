/*
	文字列をコピーする（誤った例）
*/

#include <stdio.h>

/*--- 文字列sをdにコピーする ---*/
char *str_copy(char *d, const char *s)
{
	char *t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char *ptr = "1234";
	char tmp[128];

	printf("ptr = \"%s\"\n", ptr);

	printf("コピーするのは：", tmp);
	scanf("%s", tmp);

	str_copy(ptr, tmp);					/* tmpをptrにコピー */

	puts("コピーしました。");
	printf("ptr = \"%s\"\n", ptr);		/* コピー後のptrを表示 */

	return 0;
}
