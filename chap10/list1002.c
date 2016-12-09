/*
	オブジェクトのアドレスを表示する
*/

#include <stdio.h>

int main(void)
{
	int    n;
	double x;
	int    a[3];

	printf("n   のアドレス：%p\n", &n);
	printf("x   のアドレス：%p\n", &x);
	printf("a[0]のアドレス：%p\n", &a[0]);
	printf("a[1]のアドレス：%p\n", &a[1]);
	printf("a[2]のアドレス：%p\n", &a[2]);

	return 0;
}
