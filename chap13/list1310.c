/*
	ファイルのダンプ（ファイルの中身を文字とコードで表示する）
*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int n;
	unsigned long count = 0;
	unsigned char buf[16];
	FILE *fp;
	char fname[FILENAME_MAX];			/* ファイル名 */

	printf("ファイル名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "rb")) == NULL)					/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		while ((n = fread(buf, 1, 16, fp)) > 0) {
			int i;

			printf("%08lX ", count);						/* アドレス */

			for (i = 0; i < n; i++)							/* 16進数 */
				printf("%02X ", (unsigned)buf[i]);

			if (n < 16)
				for (i = n; i < 16; i++)
					printf("   ");

			for (i = 0; i < n; i++)							/* 文字 */
				putchar(isprint(buf[i]) ? buf[i] : '.');

			putchar('\n');

			count += 16;
		}
		fclose(fp);											/* クローズ */
	}

	return 0;
}
