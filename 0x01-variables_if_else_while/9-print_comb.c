/*
 * File: 9-print_comb.c
 * Auth: AJROU MOHAMED
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0')
		if (n == 0)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
