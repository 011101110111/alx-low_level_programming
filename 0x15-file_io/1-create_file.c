#include "main.h"
#include <string.h>

/**
 * _strlen - return the lengh of string
 * @s: the string whose lengh
 *
 * Return: integer leght of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}


/**
 * create_file - Create a function that creates a file.
 * @filename : the file to creat
 * @text_content: text to write
 * Return: return 1 success ,failure 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t  bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY, O_CREAT, O_TRUNC, S_IRUSR, S_IWUSR);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);

	close(fd);
	return ((bytes == len) ? 1 : -1);
}
