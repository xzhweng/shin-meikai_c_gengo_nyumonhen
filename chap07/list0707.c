/*
	unsigned型の値を左右にシフトした値を表示
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
	unsigned x, n;

	printf("非負の整数：");          scanf("%u", &x);
	printf("シフトするビット数：");  scanf("%u", &n);

	printf("\n整数     = ");   print_bits(x);
	printf("\n左シフト = ");   print_bits(x << n);
	printf("\n右シフト = ");   print_bits(x >> n);
	putchar('\n');

	return 0;
}
