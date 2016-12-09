/*
	円周率の値をテキストファイルに書き込んで読み取る
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("変数 pi から取り出した円周率は%23.21fです。\n", pi);

	/* 書込み */
	if ((fp = fopen("PI.txt", "w")) == NULL)			/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		fprintf(fp, "%f", pi);							/* piを書き込む */
		fclose(fp);										/* クローズ */
	}

	/* 読取り */
	if ((fp = fopen("PI.txt", "r")) == NULL)			/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		fscanf(fp, "%lf", &pi);							/* piに読み取る */
		printf("ファイルから読み取った円周率は%23.21fです。\n", pi);
		fclose(fp);										/* クローズ */
	}

	return 0;
}