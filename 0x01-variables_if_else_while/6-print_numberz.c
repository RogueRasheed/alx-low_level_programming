#include <stdio.h>

/**
 * main - prints single numbers in base 10
 * Return: Always 0
 */
int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0')

	putchar('\n');

	return (0);
}
