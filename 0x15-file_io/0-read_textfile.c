#include "main.h"
/**
 * read_textfile - reads a text and prints it
 * @filename: constant char pointer
 * @letters: typedef size_t
 * Return: typedef ssize_t
 */
ssize_t read_textfile(const char *filename size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY, 600);
	if (fd < 0)
		return (0);

	return (read(fd, filename, letters));
}
