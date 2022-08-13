#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: name of file to use
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, i;
	ssize_t nb_chars = 0;
	char *buf = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	nb_chars = read(fd, buf, letters);
	if (nb_chars == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[nb_chars] = '\0';
	close(fd);
	for (i = 0; buf[i]; i++)
		write(STDOUT_FILENO, &buf[i], 1);
	free(buf);
	return (nb_chars);
}
