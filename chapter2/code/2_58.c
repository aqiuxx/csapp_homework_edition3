#include <stdio.h>

int is_little_endian()
{
	int a = 1;

	return *((char *) &a);
}

int main(void)
{
	if (is_little_endian())
	{
		printf("Little endian machine.\n");
	}
	else
	{
		printf("Big endian machine.\n");
	}

	return 0;
}
