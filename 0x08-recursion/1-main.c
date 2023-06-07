#include <stdio.h>
#include "main.h"

void _print_rev_recursion(char *s);

void print_string_in_reverse(char *s)
{
	_print_rev_recursion(s);
	putchar('\n');
}

int main()
{
	char str[] = "Colton Walker";

	print_string_in_reverse(str);

	return 0;
}
