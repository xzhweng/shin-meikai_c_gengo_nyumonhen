/*
	読み込んだ整数値を３で割った剰余を表示（switch文）
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	switch (no % 3) {
	 case 0 : puts("その数は３で割り切れます。");		break;
	 case 1 : puts("その数を３で割った剰余は１です。");	break;
	 case 2 : puts("その数を３で割った剰余は２です。");	break;
	}

	return 0;
}
