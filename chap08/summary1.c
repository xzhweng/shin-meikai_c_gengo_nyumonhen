/*
	第８章のまとめ（列挙）
*/

#include <stdio.h>

enum RGB {Red, Green, Blue};

int main(void)
{
	int color;

	printf("0～2の値：");  scanf("%d", &color);

	printf("あなたは");  
	switch (color) {
	 case 0 : printf("赤");  break;
	 case 1 : printf("緑");  break;
	 case 2 : printf("青");  break;
	}
	printf("を選びました。\n");

	return 0;
}
