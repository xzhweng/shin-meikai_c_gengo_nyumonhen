/*
	配列に文字列を格納して表示（その１：代入）
*/

#include <stdio.h>

int main(void)
{
	char str[4];	/* 文字列を格納する配列 */

	str[0] = 'A';	/* 代入 */
	str[1] = 'B';	/* 代入 */
	str[2] = 'C';	/* 代入 */
	str[3] = '\0';	/* 代入 */

	printf("文字列strは\"%s\"です。\n", str);	/* 表示 */

	return 0;
}
