#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * @filename: name of file to read
 * @letters: number of byets to read
 *
 * Return: byets print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char buf[READ_BUF_SIZE * 8];
	size_t byets;

	if (!filename || !letters)
		return (0);
	fb = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	byets = read(fp, &buf[0], letters);
	byets = write(STDOUT_FILENO, &buf[0], byets;

	close(fp);
	return (byets);
}
