#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: bytes print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char buf[READ_BUF_SIZE * 8];
	size_t bytes;

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	bytes = read(fp, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);

	close(fp);
	return (bytes);
}
