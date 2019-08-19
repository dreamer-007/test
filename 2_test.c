#include <stdio.h>
#include <unistd.h>

int add(int a,int b)
{
	return a+b;
}

int main(int argc, const char *argv[])
{
	int i,j;
	for (i = 0; i < 10; i++) {
		/* code */
		for (j = 0; j < 10; j++) {
			/* code */
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
