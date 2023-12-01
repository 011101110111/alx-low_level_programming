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
 * append_text_to_file-  appends text at the end of a file.
 * @filename : the file to creat
 * @text_content: text to write
 * Return: return 1 success ,return 0 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t  bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY, O_APPEND);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);

	close(fd);
	return (bytes == len ? 1 : -1);
}
