/*
	配列による文字列とポインタによる文字列
*/

#include <stdio.h>

int main(void)
{
	char str[] = "ABC";		/* 配列による文字列 */
	char *ptr  = "123";		/* ポインタによる文字列 */

	printf("str = \"%s\"\n", str);		/* strは先頭文字へのポインタ */
	printf("ptr = \"%s\"\n", ptr);		/* ptrは先頭文字へのポインタ */

	return 0;
}
