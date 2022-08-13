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
	int nb_chars = 0;
	char *buf = NULL;

	if (!filename)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	nb_chars = read(fd, buf, letters);
	if (nb_chars < 0)
		free(buf);
		return (0);
	buf[nb_chars] = '\0';
	close(fd);
	for (i = 0; buf[i]; i++)
		write(STDOUT_FILENO, &buf[i], 1);
	free(buf);
	return (nb_chars);
}
