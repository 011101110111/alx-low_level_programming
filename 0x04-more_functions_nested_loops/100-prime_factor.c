#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	int d = 3;
	int c = 0;

	while (n != 1)
	{
		if (n % d == 0)
		{
			n = n / d;

			if (d > c)
			{
				c = d;
			}
		}
		else
		{
			d++;
		}
	}
	printf("%d\n", c);
	return (0);
}
