/*
	“ñ‚Â‚Ì®”‚Ì˜a‚Æ·‚ğ‹‚ß‚éiŠÔˆá‚¢j
*/

#include <stdio.h>

/*--- n1‚Æn2‚Ì˜a‚Æ·‚ğsum‚Ædiff‚ÉŠi”[iŠÔˆá‚¢j---*/
void sum_diff(int n1, int n2, int sum, int diff)
{ 
	sum  = n1 + n2;							/* ˜a */
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;	/* · */
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”‚`F");   scanf("%d", &na);
	printf("®”‚aF");   scanf("%d", &nb);

	sum_diff(na, nb, wa, sa);

	printf("˜a‚Í%d‚Å·‚Í%d‚Å‚·B\n", wa, sa);

	return 0;
}
