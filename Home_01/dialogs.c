#include <stdio.h>
int main()
{
	double a, b, product;
	printf ("Enter two numbers (400'000 and 100'000): ");
	scanf ("%lf %lf", &a, &b);
	product = a * b;
	printf ("The multiplication of these numbers are = %.2lf", product);
	return 0;
}
