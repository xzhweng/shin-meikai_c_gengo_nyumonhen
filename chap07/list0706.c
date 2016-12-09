/*
	ビット単位の論理演算
*/

#include <stdio.h>

/*--- 整数x中のセットされたビット数を返す ---*/
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

/*--- unsigned型のビット数を返す ---*/
int int_bits(void)
{
	return count_bits(~0U);
}

/*--- unsigned型のビット内容を表示 ---*/
void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned a, b;

	printf("非負の整数を二つ入力してください。\n");
	printf("a : ");   scanf("%u", &a);
	printf("b : ");   scanf("%u", &b);

	printf("\na     = ");   print_bits(a);
	printf("\nb     = ");   print_bits(b);
	printf("\na & b = ");   print_bits(a & b);		/* aとbの論理積 */
	printf("\na | b = ");   print_bits(a | b);		/* aとbの論理和 */
	printf("\na ^ b = ");   print_bits(a ^ b);		/* aとbの排他的論理和 */
	printf("\n~a    = ");   print_bits(~a);			/* aの１の補数 */
	printf("\n~b    = ");   print_bits(~b);			/* bの１の補数 */
	putchar('\n');

	return 0;
}
