/*
	学生を表す構造体による高尾君
*/

#include <stdio.h>

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
	struct student takao = {"Takao", 173, 86.2};

	printf("氏　名 ＝ %s\n",   takao.name);
	printf("身　長 ＝ %d\n",   takao.height);
	printf("体　重 ＝ %.1f\n", takao.weight);
	printf("奨学金 ＝ %ld\n",  takao.schols);

	return 0;
}
