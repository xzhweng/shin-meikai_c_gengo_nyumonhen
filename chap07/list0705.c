/*
	配列の要素数を求める
*/

#include <stdio.h>

int main(void)
{
	int    vi[10];
	double vd[25];

	printf("配列viの要素数＝%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
	printf("配列vdの要素数＝%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

	return 0;
}
