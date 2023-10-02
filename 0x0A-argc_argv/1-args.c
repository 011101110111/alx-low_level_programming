#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 for succesful exit
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n" argv[i]);
	}
}
