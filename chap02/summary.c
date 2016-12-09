/*
	第２章のまとめ
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	double r;	/* 半径 */

	printf("整数aとbの値：");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);	/* 加算：２項+演算子 */
	printf("a - b = %d\n", a - b);	/* 減算：２項-演算子 */
	printf("a * b = %d\n", a * b);	/* 積　：２項*演算子 */
	printf("a / b = %d\n", a / b);	/* 商　：/演算子     */
	printf("a %% b = %d\n", a % b);	/* 剰余：%演算子     */

	printf("(a+b)/2 = %d\n",   (a + b) / 2);
	printf("平均値  = %f\n\n", (double)(a + b) / 2);

	printf("半径：");
	scanf("%lf", &r);

	printf("半径%.3fの円の面積は%.3fです。\n", r, 3.14 * r * r);

	return 0;
}
