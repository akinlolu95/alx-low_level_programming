#include <stdlib.h>
#include <time.h>
/** more headers goes there */

/** betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** your code goes there */
	if (n > 0)
	{
		printf("%dis positive\n");
	}
	if (n == 0)
	{
		printf("%dis zero\n");
	}
	if (n < 0)
	{
		printf("%dis negative\n");
	}
	return (0);
}
