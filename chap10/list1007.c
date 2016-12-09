/*
	二つの整数を昇順に並べる
*/

#include <stdio.h>

/*--- pxとpyが指すオブジェクトの値を交換 ---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/*--- *n1≦*n2となるように並べる ---*/
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int na, nb;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");   scanf("%d", &na);
	printf("整数Ｂ：");   scanf("%d", &nb);

	sort2(&na, &nb);

	puts("昇順にソートしました。");
	printf("整数Ａは%dです。\n", na);
	printf("整数Ｂは%dです。\n", nb);

	return 0;
}
