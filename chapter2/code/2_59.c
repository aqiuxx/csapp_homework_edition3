#include <stdio.h>

int combine(int x, int y)
{
	return (x & 0xff) | (y & (~0xff));
}

int main(void)
{
	int x = 0x89abcdef;
	int y = 0x76543210;

	int z = combine(x, y);
	printf("%.2x\n", z);

	return 0;
}
