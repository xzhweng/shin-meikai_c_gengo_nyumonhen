/*
	アドレスを取得できないオブジェクト（本プログラムは実行できません）
*/

#include <stdio.h>

int main(void)
{
	register int x;

	printf("%p\n", &x);		/* エラー */

	return 0;
}
