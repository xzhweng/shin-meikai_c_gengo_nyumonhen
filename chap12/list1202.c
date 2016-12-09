/*
	学生を表す構造体による佐中君
*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN	64		/* 名前の文字数 */

/*=== 学生を表す構造体 ===*/
struct student {
	char  name[NAME_LEN];	/* 名前 */
	int   height;			/* 身長 */
	float weight;			/* 体重 */
	long  schols;			/* 奨学金 */
};

int main(void)
{
	struct student sanaka;

	strcpy(sanaka.name, "Sanaka");	/* 名前 */
	sanaka.height = 175;			/* 身長 */
	sanaka.weight = 62.5;			/* 体重 */
	sanaka.schols = 73000;			/* 奨学金 */

	printf("氏　名 ＝ %s\n",   sanaka.name);
	printf("身　長 ＝ %d\n",   sanaka.height);
	printf("体　重 ＝ %.1f\n", sanaka.weight);
	printf("奨学金 ＝ %ld\n",  sanaka.schols);

	return 0;
}
