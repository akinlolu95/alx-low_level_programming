#include <stdio.h>
/**
 * main - print all letters except q and e
 * Return: Always 0
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'q' && let != 'e')
			putchar(let);
	}
	putchar('\n');
	return (0);
}
