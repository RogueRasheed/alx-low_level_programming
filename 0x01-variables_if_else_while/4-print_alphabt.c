#include <stdio.h>

/**
 * main - prints letters in lowercase
 * followed with a new line exepmting q and e
 * Return: Always 0
 */
int main(void)
{
	char ra;

	for (ra = 'a'; ra <= 'z'; ra++)
	{
		if (ra != 'e' && ra != 'q')
		putchar(ra);
	}

	putchar('\n');

	return (0);
}
