/*
	構造体を返す関数
*/

#include <stdio.h>

/*=== xyz構造体 ===*/
struct xyz {
	int    x;
	long   y;
	double z;
};

/*--- {x,y,z}の値をもつxyz構造体を返す ---*/
struct xyz xyz_of(int x, long y, double z)
{
	struct xyz temp;

	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp;
}

int main(void)
{
	struct xyz s = {0, 0, 0};

	s = xyz_of(12, 7654321, 35.689);

	printf("xyz.x = %d\n",  s.x);
	printf("xyz.y = %ld\n", s.y);
	printf("xyz.z = %f\n",  s.z);

	return 0;
}
