#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define MAX 1024

/**
 *main - Entry point to program that copies content of one file to another
 *@ac: Argument count
 *@av: List of arguments
 *Return: An integer
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, close_to, close_from;
	char *file_from, *file_to;
	mode_t mode = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	fd_to = open(file_to, (O_WRONLY | O_CREAT | O_TRUNC), mode);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	transfer_bytes(fd_from, fd_to, file_from, file_to);
	close_from = close(fd_from);
	if (close_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	close_to = close(fd_to);
	if (close_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

/**
 *transfer_bytes - transfers bythes from one file to another
 *@fd_from: files descriptor of source
 *@fd_to: file descriptor of destinaation
 *@file_from: Name of source file
 *@file_to: Name of destination file
 *Return: void
 */
void transfer_bytes(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t input, output;
	char buffer[MAX];

	while (input > 0)
	{
		input = read(fd_from, buffer, MAX);
		if (input < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n",
				file_from);
			exit(98);
		}
		if (input > 0)
		{
			output = write(fd_to, buffer, input);
			if (output < 0 || input != output)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", file_to);
				exit(99);
			}
		}
	}
}
