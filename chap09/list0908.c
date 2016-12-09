/*
	•¶š—ñ‚Ì’·‚³‚ğ’²‚×‚é
*/

#include <stdio.h>

/*--- •¶š—ñstr‚Ì’·‚³‚ğ•Ô‚· ---*/
int str_length(const char s[])
{
	int len = 0;

	while (s[len])
		len++;
	return len;
}

int main(void)
{
	char str[128];	/* ƒiƒ‹•¶š‚ğŠÜ‚ß‚Ä128•¶š‚Ü‚ÅŠi”[‚Å‚«‚é */

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	printf("•¶š—ñ\"%s\"‚Ì’·‚³‚Í%d‚Å‚·B\n", str, str_length(str));

	return 0;
}
