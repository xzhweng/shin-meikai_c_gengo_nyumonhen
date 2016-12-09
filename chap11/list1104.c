/*
	•¶Žš—ñ‚Ì”z—ñ
*/

#include <stdio.h>

int main(void)
{
	int  i;
	char a[][5] = {"LISP", "C", "Ada"};
	char *p[]   = {"PAUL", "X", "MAC"};

	for (i = 0; i < 3; i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);

	for (i = 0; i < 3; i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);

	return 0;
}
