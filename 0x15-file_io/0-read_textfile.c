#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *read_textfile - reads a text file and prints it to POSIX stdout
 *@letters: The number of letters it should read
 *@filename: Directory of file
 *Return: The number ofletters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_count = read(fd, buffer, letters);
	buffer[read_count] = '\0';
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count != read_count || write_count == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (write_count);
}
