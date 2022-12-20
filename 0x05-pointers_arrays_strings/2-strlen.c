#include "main.h"
/**
 * _strlen - lengtrh of string
 * 
 * Return: lengfth
 */
int _strlen(char *s)
{
	int oki = 0;

	while (*s != '\0')
	{
		oki++;
		s++;
	}
	return(oki);
}
