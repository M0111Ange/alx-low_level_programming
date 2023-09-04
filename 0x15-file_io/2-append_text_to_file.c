#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *append_text_to_file - Adds text toa file
 *
 *@filename: The name of thefile to be created
 *@text_content: Null terminated string contained in file
 *Return: 1 if successful and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, resp;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, (O_WRONLY | O_APPEND));
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		resp = write(fd, text_content, strlen(text_content));
	if (resp == -1)
		return (resp);
	else
		return (1);
}
