#include <stdio.h>

int main(void)
{
	int a, b , c, d;
	int x = 0x0;
	a = !(~x);
 	b = !x;
 	c = !(~(x & 0xff));
	d = !(x >> ((sizeof(int)-1)<<3));
	printf("x = %x\n", x);
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	x = 0xffff;
	a = !(~x);
 	b = !x;
 	c = !(~(x & 0xff));
	d = !(x >> ((sizeof(int)-1)<<3));
	printf("x = %x\n", x);
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	x = 0x1010;
	a = !(~x);
	b = !x;
	c = !(~(x & 0xff));
	d = !(x >> ((sizeof(int)-1)<<3));
	printf("x = %x\n", x);
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	return 0;
}
