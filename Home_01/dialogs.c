#include <stdio.h>
int main()
{
	unsigned long long int a, b, product;
	printf ("Enter two numbers (400'000 and 100'000): \n");
	scanf ("%llu %llu", &a, &b);
	product = a * b;
	printf ("The multiplication of these numbers are = %.2llu \n", product);
	return 0;
}
