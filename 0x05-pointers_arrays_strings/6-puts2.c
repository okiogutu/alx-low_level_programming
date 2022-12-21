#include <stdio.h>
#include "main.h"
/**
 * puts2 - function to print one character
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int oki = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		oki++;
	}
	for (o = 0; o <= 1; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
