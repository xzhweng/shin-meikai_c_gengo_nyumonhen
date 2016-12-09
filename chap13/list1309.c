/*
	円周率の値をバイナリファイルに書き込んで読み取る
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("変数 pi から取り出した円周率は%23.21fです。\n", pi);

	/* 書込み */
	if ((fp = fopen("PI.bin", "wb")) == NULL)		/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);			/* piを書き込む */
		fclose(fp);
	}												/* クローズ */

	/* 読取り */
	if ((fp = fopen("PI.bin", "rb")) == NULL)		/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		fread(&pi, sizeof(double), 1, fp);			/* piに読み取る */
		printf("ファイルから読み取った円周率は%23.21fです。\n", pi);
		fclose(fp);									/* クローズ */
	}

	return 0;
}
