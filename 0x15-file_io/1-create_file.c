#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename : the file to creat
 * @text_content: text to write
 * Return: return 1 success .failure -1
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)

		size_t len = strlen(text_content);

		if (write(fd, text_content, len) != (ssize_t)len)
		{

			close(fd)
				return (-1);
		}

	close(fd);
	return (1);
}
