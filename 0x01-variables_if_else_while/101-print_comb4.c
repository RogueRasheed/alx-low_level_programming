#include <stdio.h>
/**
 * main - three digits combination
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;
i = 0;
while (i < 1000)
{
	j = i / 100;
	k = (i / 10) % 10;
	l = i % 100;
	if (j < k && k < l)
	{
		putchar(l + '0');
		putchar(k + '0');
		putchar(j + '0');
		if (i < 789)
		{
			putchar(',');
			putchar(',');
		}
	}
	i++
}
putchar('\n');

return (0);
}
