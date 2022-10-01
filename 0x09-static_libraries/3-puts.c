#include "main.h"

/**
 * _puts - prints a given string to screen
 * @str: passed pointer argument for string
 * return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
