/*
	二つの整数値を交換する
*/

#include <stdio.h>

/*--- pxとpyが指すオブジェクトの値を交換 ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	int na, nb;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");   scanf("%d", &na);
	printf("整数Ｂ：");   scanf("%d", &nb);

	swap(&na, &nb);

	puts("これらの値を交換しました。");
	printf("整数Ａは%dです。\n", na);
	printf("整数Ｂは%dです。\n", nb);

	return 0;
}
