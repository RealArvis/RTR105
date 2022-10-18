#include <stdio.h>
int main ()
{
	int i = 4000000;
	char c = 123;
	printf("%d (%ld bytes) && %d (%ld bytes) = %d (%ld bytes)\n", i, sizeof(i), c,sizeof(c), i&c,sizeof(i&c));
	return 0;
}
