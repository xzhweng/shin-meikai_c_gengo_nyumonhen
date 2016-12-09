/*
	型と演算について確認するためのプログラム
*/

#include <stdio.h>

int main(void)
{
	int    n1, n2, n3, n4;	/* 整数 */
	double d1, d2, d3, d4;	/* 浮動小数点数 */

	n1 = 5   / 2;			/* n1 ← 2   */
	n2 = 5.0 / 2.0;			/* n2 ← 2.5（代入時に小数部を切捨て）*/
	n3 = 5.0 / 2;			/* n3 ← 2.5（代入時に小数部を切捨て）*/
	n4 = 5   / 2.0;			/* n4 ← 2.5（代入時に小数部を切捨て）*/

	d1 = 5   / 2;			/* d1 ← 2    */
	d2 = 5.0 / 2.0;			/* d2 ← 2.5  */
	d3 = 5.0 / 2;			/* d3 ← 2.5  */
	d4 = 5   / 2.0;			/* d4 ← 2.5  */

	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("n3 = %d\n", n3);
	printf("n4 = %d\n\n", n4);

	printf("d1 = %f\n", d1);
	printf("d2 = %f\n", d2);
	printf("d3 = %f\n", d3);
	printf("d4 = %f\n", d4);

	return 0;
}
