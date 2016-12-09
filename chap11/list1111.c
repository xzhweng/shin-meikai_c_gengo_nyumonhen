/*--- strcmp‚ÌÀŒ»—á ---*/
int strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2) {
		if (*s1 == '\0')
			return 0;								/* “™‚µ‚¢ */
		s1++;
		s2++;
	}

	return (unsigned char)*s1 - (unsigned char)*s2;
}

/*--- strncmp‚ÌÀŒ»—á ---*/
int strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2) {
		if (*s1 != *s2)								/* “™‚µ‚­‚È‚¢ */
			return (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
		n--;
	}
	if (!n)  return 0;								/* “™‚µ‚¢ */
	if (*s1) return 1;								/* s1 > s2 */

	return -1;										/* s1 < s2 */
}
