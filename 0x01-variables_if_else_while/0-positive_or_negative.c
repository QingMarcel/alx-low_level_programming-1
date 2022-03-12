#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: prints if the value stored in n is either postive, negative
 * equal to zero
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand()  > 0)
	{
		printf("%d is positive\n", n);
	} else - RAND_MAX / 2;
	/* your code goes there */
	if (nif (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
