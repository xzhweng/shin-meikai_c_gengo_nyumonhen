/*
	５人の学生の点数を読み込んで合計点と平均点を表示
*/

#include <stdio.h>

int main(void)
{
	int uchida;			/* 内田君の点数 */
	int satoh;			/* 佐藤君の点数 */
	int sanaka;			/* 佐中君の点数 */
	int hiraki;			/* 平木君の点数 */
	int masaki;			/* 真崎君の点数 */
	int sum = 0;		/* 合計点 */

	printf("5人の点数を入力してください。\n");
	printf(" 1番：");	scanf("%d", &uchida);	sum += uchida;
	printf(" 2番：");	scanf("%d", &satoh);	sum += satoh;
	printf(" 3番：");	scanf("%d", &sanaka);	sum += sanaka;
	printf(" 4番：");	scanf("%d", &hiraki);	sum += hiraki;
	printf(" 5番：");	scanf("%d", &masaki);	sum += masaki;

	printf("合計点：%5d\n", sum);
	printf("平均点：%5.1f\n", (double)sum / 5);

	return 0;
}
