#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry poin
 *
 * Description: prints if the string is greater than 5 or less than 6
 * or equal to zero
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit \n", n, last_digit);
	} else
	{
		printf("Last dig== 0)
	{
		printf("Last digit of %d is %d and is 0it of %d is %d and is less than 6 and ", n, last_digit);
		printf("not 0\n");
	}
	return (0);
}~