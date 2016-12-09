/*
	ŠKæ‚ğ‹‚ß‚é
*/

#include <stdio.h>

/*--- ŠKæ’l‚ğ•Ô‚· ---*/
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int num;

	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &num);

	printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n", num, factorial(num));

	return 0;
}
