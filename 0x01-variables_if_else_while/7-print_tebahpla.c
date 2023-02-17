#include <stdio.h>
/**
 * main - print all letters in reverse
 * Return: Always 0
 */
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');
	return (0);
}
