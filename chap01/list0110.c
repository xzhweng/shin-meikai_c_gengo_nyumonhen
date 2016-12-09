/*
	二つの変数を初期化して表示
*/

#include <stdio.h>

int main(void)
{
	int vx = 57;					/* vxはint型の変数（57で初期化）*/
	int vy = vx + 10;				/* vyはint型の変数（vx + 10で初期化）*/

	printf("vxの値は%dです。\n", vx);	/* vxの値を表示 */
	printf("vyの値は%dです。\n", vy);	/* vyの値を表示 */

	return 0;
}
