/*
	ポインタによって身長を間接的に操作する
*/

#include <stdio.h>

int main(void)
{
	int sato   = 178;	/* 佐藤宏史君の身長 */
	int sanaka = 175;	/* 佐中俊哉君の身長 */
	int masaki = 179;	/* 真崎宏孝君の身長 */

	int *isako, *hiroko;

	isako  = &sato;			/* isako はsato　を指す（佐藤君が好き）*/
	hiroko = &masaki;		/* hirokoはmasakiを指す（真崎君が好き）*/

	printf("いさ子さんの好きな人の身長：%d\n", *isako);
	printf("ひろ子さんの好きな人の身長：%d\n", *hiroko);

	isako = &sanaka;		/* isako はsanakaを指す（気が変わった）*/

	*hiroko = 180;			/* hirokoの指すオブジェクトに180を代入 */
							/* ひろ子さんの好きな人の身長を書きかえる */

	putchar('\n');
	printf("佐藤君の身長：%d\n", sato);
	printf("佐中君の身長：%d\n", sanaka);
	printf("真崎君の身長：%d\n", masaki);
	printf("いさ子さんの好きな人の身長：%d\n", *isako);
	printf("ひろ子さんの好きな人の身長：%d\n", *hiroko);

	return 0;
}
