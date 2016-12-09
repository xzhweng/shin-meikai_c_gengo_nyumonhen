/*
	現在の日付・時刻を表示
*/

#include <time.h>
#include <stdio.h>

int main()
{
	time_t current = time(NULL);				/* 現在の暦時刻 */
	struct tm *timer = localtime(&current);		/* 要素別の時刻（地方時）*/
	char *wday_name[] = {"日", "月", "火", "水", "木", "金", "土"};

	printf("現在の日付・時刻は%d年%d月%d日（%s）%d時%d分%d秒です。\n",
			timer->tm_year + 1900,			/* 年（1900を加えて求める）*/
			timer->tm_mon + 1,				/* 月（1を加えて求める）*/
			timer->tm_mday,					/* 日 */
			wday_name[timer->tm_wday],		/* 曜日（0～6）*/
			timer->tm_hour,					/* 時 */
			timer->tm_min,					/* 分 */
			timer->tm_sec					/* 秒 */
		  );
	return 0;
}
