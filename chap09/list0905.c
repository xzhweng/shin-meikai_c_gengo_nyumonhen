/*
	•¶š—ñ"12345"‚ğ‘®‰»‚µ‚Ä•\¦
*/

#include <stdio.h>

int main(void)
{
	char str[] = "12345";

	printf("%s\n",   str);		/* ‚»‚Ì‚Ü‚Ü */
	printf("%3s\n",  str);		/* Å’á‚RŒ… */
	printf("%.3s\n", str);		/* ‚RŒ…‚Ü‚Å */
	printf("%8s\n",  str);		/* Å’á‚WŒ…‚Å‰E‚æ‚¹ */
	printf("%-8s\n", str);		/* Å’á‚WŒ…‚Å¶‚æ‚¹ */

	return 0;
}
