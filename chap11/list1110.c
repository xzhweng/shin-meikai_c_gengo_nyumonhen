/*--- strcatの実現例 ---*/
char *strcat(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1)					/* s1を末尾まで進める */
		s1++;
	while (*s1++ = *s2++)		/* s2に'\0'が見つかるまでコピー */
		;

	return tmp;
}

/*--- strncatの実現例 ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (*s1)							/* s1を末尾まで進める */
		s1++;
	while (n--)
		if (!(*s1++ = *s2++)) break;	/* 途中に'\0'があれば終了 */
	*s1 = '\0';							/* s1の最後に'\0'を入れる */

	return tmp;
}
