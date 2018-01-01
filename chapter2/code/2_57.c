#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	for (i = 0; i < len; i++)
	{
		printf("%.2x",start[i]);
	}
	printf("\n");
}


void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_short(short x)
{
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x)
{
    show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x)
{
    show_bytes((byte_pointer) &x, sizeof(double));
}

void show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void test_show_byte(val)
{
	int ival = val;
	float fval = (float)val;
	int *pval = &ival;

	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(void)
{
    int x = 12345;	/* 0x3090 */
		printf("show_int:");
    show_int(x);

    short s = 12345;
		printf("show_short:");
    show_short(s);

    long l = 12345L;
		printf("show_long:");
    show_long(l);

		double d = 12345.0;
		printf("show_double:");
		show_double(d);

		printf("test_show_byte:\n");
		test_show_byte(x);

    return 0;
}
