#include "main.h"

/**
 * _islower - function that checks lowercase character
 *@c: thge character to be checked
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
