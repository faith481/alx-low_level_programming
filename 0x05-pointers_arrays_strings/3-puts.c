#include "main.h"

/**
 * puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _ puts(char *str)
{
	while (*str != '0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
