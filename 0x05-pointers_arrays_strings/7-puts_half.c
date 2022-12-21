#include "main.h"
/**
 * puts_half - print half a string
 * if odd len, n = (stringlength - 1)/2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, oki;

	oki = 0;

	for (a = 0; str[a] != '\0'; a++)
		oki++;
	n = (oki / 2);
	if ((oki % 2) == 1)
		n = ((oki + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
