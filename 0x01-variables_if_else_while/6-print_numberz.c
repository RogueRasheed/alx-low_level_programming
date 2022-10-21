#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints single numbers in base 10
 * Return: Always 0
 */
int main(void)
{
	int no;

	for (no = 0; no <= 9; no++)
		putchar(no);

	putchar('\n');

	return (0);
}
