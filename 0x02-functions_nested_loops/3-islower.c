#include "main.h"


/**
 * _islower - check if character is in lowercase
 *@c: is the parameter
 * Return: Always returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
