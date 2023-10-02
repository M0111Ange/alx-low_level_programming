#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *create_file - Creates a file with rx-------
 *
 *@filename: The name of thefile to be created
 *@text_content: Null terminated string contained in file
 *Return: 1 if successful and -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd, resp;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, (O_CREAT | O_WRONLY | O_TRUNC), 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		resp = write(fd, text_content, strlen(text_content));
	if (resp == -1)
		return (resp);
	else
		return (1);
}
