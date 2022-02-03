#include <stdio.h>
#include <math.h>

const unsigned long n = 123;
int main()
{
	unsigned digits = 0;
	unsigned i;
	for ( i = 1; i <= n; i++)
	{
		digits += log10(i);
	}
	printf("broqt na cifrite na proizwedenieto e %lu", (unsigned long)digits);


	return (0);
}