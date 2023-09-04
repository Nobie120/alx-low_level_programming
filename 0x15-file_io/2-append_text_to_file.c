#include "main.h"

/**
 * _strlen - fimnds len of string
 * @s:the string
 *
 * Return:len
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
 * append_text_to_file - function that appends text at the end of a file.
 * @filename:name of file
 * @text_content:what to append
 *
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
