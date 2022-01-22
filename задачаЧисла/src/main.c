#include <stdio.h>
#include <math.h>

int main()
{
	double num = 7.33333;
	int digits;
	
	for(digits = 1; num < ceil(num) ; num*=10, digits++ );
	printf("digits are: %d\n", digits);
	return (0);
}