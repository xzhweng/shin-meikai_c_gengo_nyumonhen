/*
	警報を出力する
*/

#include <stdio.h>

/* 警報を出力 */
void put_alert(void)
{
	putchar('\a');
}

int main(void)
{
	int i;
	int no;

	printf("警報を出力する回数：");
	scanf("%d", &no);

	for (i = 0; i < no; i++)
		put_alert();

	return 0;
}
