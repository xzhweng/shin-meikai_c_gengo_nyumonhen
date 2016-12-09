/*
	超能力をもったひろ子さん
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

/*--- stdが指す学生の身長を180cmまで伸ばして体重を80kgまで減らす ---*/
void hiroko(struct student *std)
{
	if ((*std).height < 180) (*std).height = 180;
	if ((*std).weight >  80) (*std).weight =  80;
}

int main(void)
{
	struct student sanaka = {"Sanaka", 175, 62.5, 73000};

	hiroko(&sanaka);

	printf("氏　名 ＝ %s\n",   sanaka.name);
	printf("身　長 ＝ %d\n",   sanaka.height);
	printf("体　重 ＝ %.1f\n", sanaka.weight);
	printf("奨学金 ＝ %ld\n",  sanaka.schols);

	return 0;
}
