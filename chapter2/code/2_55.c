#include <string.h>
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

int main(void)
{
	int x = 0x123456;
  show_bytes((byte_pointer) &x, sizeof(int));

	const char *s = "abcdef";
	show_bytes((byte_pointer)s, strlen(s));

	printf("strlen(s) = %lu\n",strlen(s));
	printf("sizeof(s) = %lu\n",sizeof(s));
	printf("sizeof(\"abcdef\") = %lu\n",sizeof("abcdef"));

	return 0;

}
