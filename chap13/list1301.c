/*
	ファイルのオープンとクローズ
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc", "r");						/* ファイルのオープン */

	if (fp == NULL)
		printf("\aファイル\"abc\"をオープンできませんでした。\n");
	else {
		printf("\aファイル\"abc\"をオープンしました。\n");
		fclose(fp);								/* ファイルのクローズ */
	}

	return 0;
}
