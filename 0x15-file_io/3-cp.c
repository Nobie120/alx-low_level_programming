#include "main.h"
/**
 * main - copies 1 file to another
 * @argc:arguement count
 * @argv:arguement vectors
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	const char *from = argv[1], *to = argv[2];
	ssize_t letters_read, letters_written;
	int fd_dest, fd_src;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_src = open(from, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	fd_dest = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to);
		exit(99);
	}
	while ((letters_read = read(fd_src, buffer, 1024)) > 0)
	{
		letters_written = write(fd_dest, buffer, letters_read);
		if (letters_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to);
			close(fd_src);
			close(fd_dest);
			exit(99);
		}
	}
	if (letters_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		close(fd_src);
		close(fd_dest);
		exit(98);
	}
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if ((close(fd_dest) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
