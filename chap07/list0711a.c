/*
	0.0‚©‚ç1.0‚Ü‚Å0.01’PˆÊ‚ÅŒJ‚è•Ô‚·[‰ü]
*/

#include <stdio.h>

int main(void)
{
	float x;

	for (x = 0.0; x != 1.0; x += 0.01)
		printf("x = %f\n", x);

	return 0;
}
