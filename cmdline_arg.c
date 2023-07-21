#include <stdio.h>

int main(int argc, char **argv)
{
	int cnt=0;

	printf("argc: %d\n", argc);
	printf("argv:\n");
	while (cnt < argc)
	{
		printf("%s\n", argv[cnt]);
		cnt++;
	}
	return (1);
}