#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s);

int main()
{
	char *str = "Puts with recursion";
	_puts_recursion(str);
	return 0;
}
