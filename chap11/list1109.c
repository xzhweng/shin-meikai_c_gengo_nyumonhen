/*--- strcpy‚ÌÀŒ»—á ---*/
char *strcpy(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1++ = *s2++)
		;

	return tmp;
}

/*--- strncpy‚ÌÀŒ»—á ---*/
char *strncpy(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (n) {
		if (!(*s1++ = *s2++)) break;	/* '\0'‚ğŒ©‚Â‚¯‚½‚çI—¹ */
		n--;
	}
	while (n--)
		*s1++ = '\0';					/* c‚è‚ğ'\0'‚Å–„‚ß‚é */

	return tmp;
}
