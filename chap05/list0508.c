/*
	”z—ñ‚Ì‘S—v‘f‚Ì•À‚Ñ‚ð”½“]‚·‚é
*/

#include <stdio.h>

int main(void)
{
	int i;
	int x[7];					/* int[7]Œ^‚Ì”z—ñ */

	for (i = 0; i < 7; i++) {	/* —v‘f‚É’l‚ð“Ç‚Ýž‚Þ */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* —v‘f‚Ì•À‚Ñ‚ð”½“] */
		int temp = x[i];
		x[i]     = x[6 - i];
		x[6 - i] = temp;
	}

	puts("”½“]‚µ‚Ü‚µ‚½B");
	for (i = 0; i < 7; i++)		/* —v‘f‚Ì’l‚ð•\Ž¦ */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
