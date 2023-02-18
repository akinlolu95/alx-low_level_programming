#include <stdio.h>
/**
 * main - print all possible combination of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 29; x < 39; x++)
	{
		putchar(x);
		if (x != 38)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
