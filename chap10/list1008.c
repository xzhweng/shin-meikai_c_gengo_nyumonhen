/*
	二つの実数値を交換する（誤り）
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
	double da, db;

	puts("二つの実数を入力してください。");
	printf("実数Ａ：");  scanf("%lf", &da);
	printf("実数Ｂ：");  scanf("%lf", &db);

	swap(&da, &db);

	puts("これらの値を交換しました。");
	printf("実数Ａは%fです。\n", da);
	printf("実数Ｂは%fです。\n", db);

	return 0;
}
