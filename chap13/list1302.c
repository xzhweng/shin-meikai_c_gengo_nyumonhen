/*
	身長と体重を読み込んで平均値を求めて表示する
*/

#include <stdio.h>

int main(void)
{
	FILE   *fp;
	int    ninzu = 0;			/* 人数 */
	char   name[100];			/* 名前 */
	double height, weight;		/* 身長・体重 */
	double hsum = 0.0;			/* 身長の合計 */
	double wsum = 0.0;			/* 体重の合計 */

	if ((fp = fopen("hw.dat", "r")) == NULL)				/* オープン */
		printf("\aファイルをオープンできません。\n");
	else {
		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		printf("----------------------\n");
		printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);											/* クローズ */
	}

	return 0;
}
