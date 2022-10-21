#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char rr;

	for (rr = 'a'; rr <= 'z'; rr++)
		putchar(rr);
	for (rr = 'A'; rr <= 'Z'; rr++)
		putchar(rr);

	putchar('\n');

	return (0);
}
