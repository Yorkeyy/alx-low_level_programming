#include "main.h"
/**
 *_isalpha - a function that checks for alphabetic character
 * Return: 1 if c is an alphabet, or 0 if otherwise
 * @c: the parameter to be checked
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
