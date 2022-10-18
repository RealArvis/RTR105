#include <stdio.h>
int main()
{
	int i1 = 1000, i2 = 2000;
	printf("%d (%ld bytes)/%d (%ld bytes) = %d (%ld bytes)\n", i1,sizeof(i1), i2,sizeof(i2), i1/i2,sizeof(i1/i2));

	return 0;
}
