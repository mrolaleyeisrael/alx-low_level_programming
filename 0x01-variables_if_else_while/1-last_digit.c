#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n%10
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 amd not 0", n, last);

	return (0);
}
