#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
