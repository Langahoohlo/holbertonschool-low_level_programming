#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: file to edited
 * @text_content: ....
 * Return: 1 if sccuess
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		
		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
