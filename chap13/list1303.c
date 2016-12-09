/*
	プログラムを実行した日付・時刻をファイルに書き出す
*/

#include <time.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* 現在の暦時刻 */
	struct tm *timer = localtime(&current);		/* 要素別の時刻（地方時）*/

	if ((fp = fopen("dt_dat", "w")) == NULL)				/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		printf("現在の日付・時刻を書き出しました。\n");
		fprintf(fp, "%d %d %d %d %d %d\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour,		   timer->tm_min,	  timer->tm_sec  );
		fclose(fp);											/* クローズ */
	}

	return 0;
}
