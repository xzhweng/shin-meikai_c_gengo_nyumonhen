/*
	第3章のまとめ（その２）値に応じて色を表示
*/

#include <stdio.h>

int main(void)
{
	int sw;

	printf("整数を入力してください：");
	scanf("%d", &sw);

	if (sw >= 1 && sw <= 3) {
		switch (sw) {
		 case 1: printf("赤");  break;
		 case 2: printf("青");  break;
		 case 3: printf("白");  break;
		}
		printf("です。\n");
	}

	return 0;
}
