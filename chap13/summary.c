/*
	標準入力からの入力をファイルに書き込む
*/

#include <stdio.h>

int main(void)
{
	int ch;
	FILE *fp;						/* コピー先ファイル */
	char fname[FILENAME_MAX];		/* コピー先ファイル名 */

	printf("コピー先ファイル名：");
	scanf("%s\n", fname);

	if ((fp = fopen(fname, "w")) == NULL)	/* コピー先をオープン */
		printf("\aコピー先ファイルをオープンできません。\n");
	else {
		while ((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);							/* コピー先をクローズ */
	}

	return 0;
}
