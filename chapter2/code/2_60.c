#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b)
{
	//return ((x & ~(0xff<<i*8)) | (b<<i*8));
	return ((x & ~(0xff<<(i<<3))) | (b<<(i<<3)));
}

int main(void)
{
	unsigned x = 0x12345678;

	unsigned y = replace_byte(x, 2, 0xab);
	printf("%.2x\n", y);

	y = replace_byte(x, 0, 0xab);
	printf("%.2x\n", y);

	return 0;
}
