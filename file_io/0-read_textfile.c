#include "main.h"

/**
 * read_textfile - function to read a text file
 * @filename: file to read
 * @letters: count of symbols to print
 *
 * Return: letter and numbers
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buff;
	
	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buff, letters);
	
	if (bytes_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buff);
		close(fd);
		return (0);
	}
	
	free(buff);
	close(fd);
	return (bytes_written);
}
