/*
	整数と浮動小数点数
*/

#include <stdio.h>

int main(void)
{
	int n;			/* 整数 */
	double x;		/* 浮動小数点数 */

	n = 9.99;
	x = 9.99;

	printf("int   型変数 nの値 ：%d\n", n);			/*    9      */
	printf("             n / 2 ：%d\n", n / 2);		/*    9 / 2  */

	printf("double型変数 xの値 ：%f\n", x);			/* 9.99       */
	printf("             x /2.0：%f\n", x / 2.0);	/* 9.99 / 2.0 */

	return 0;
}
