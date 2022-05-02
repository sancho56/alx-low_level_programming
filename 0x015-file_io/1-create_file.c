#include "main.h"
/**
 * create_file - creates a file
 * @filename: const char pointer
 * @text_content: char pointer
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fd == NULL)
		return (-1);
	
	write(fd, text_content, 12);
	close(fd);
	return (0);
}
