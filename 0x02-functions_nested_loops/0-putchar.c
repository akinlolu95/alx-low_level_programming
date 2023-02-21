#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the characterinto stdout
 * @c: the character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
