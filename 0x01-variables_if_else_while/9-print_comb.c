
gentomacine
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x01-variables_if_else_while/9-print_comb.c
@gentomacine
gentomacine all
 1 contributor
Executable File  31 lines (25 sloc)  322 Bytes
#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers with commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}
