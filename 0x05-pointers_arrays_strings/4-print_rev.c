#include "main.h"
/**
 * printre - acuirepw pataso
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int oki = 0;
	int o;

	while (*s != '\0')
	{
		oki++;
		s++;
	}
	s--;
	for (o = oki; 0 > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
