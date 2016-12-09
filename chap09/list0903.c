/*
	配列に文字列を格納して表示（その２：初期化）
*/

#include <stdio.h>

int main(void)
{
	char str[] = "ABC";		/* {'A', 'B', 'C', '\0'}による初期化 */

	printf("文字列strは\"%s\"です。\n", str);	/* 表示 */

	return 0;
}
