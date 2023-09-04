#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename:the name of the file to create
 * @text_content:text_content is a NULL
 * terminated string to write to the file
 *
 * Return:1 on success, -1 on failure
 * (file can not be created, file can not be
 * written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
