/*
	配列の各要素に先頭から順に1,2,3,4,5を代入して表示
*/

#include <stdio.h>

int main(void)
{
	int v[5];	/* int[5]型の配列 */

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 5;

	printf("v[0] = %d\n", v[0]);
	printf("v[1] = %d\n", v[1]);
	printf("v[2] = %d\n", v[2]);
	printf("v[3] = %d\n", v[3]);
	printf("v[4] = %d\n", v[4]);

	return 0;
}
