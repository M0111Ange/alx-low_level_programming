#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _checkelf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: If the file is not an ELF file - exit code 98.
 * Return: void
 */

void _checkelf(unsigned char *e_ident)
{
	int i = 0;

	while (i < 4)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		i++;
	}
}

/**
 * _printmagic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to array containing the ELF magic numbers.
 * Description: Magic numbers are separated by spaces.
 * Return: void
 */

void _printmagic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	i = 0;
	while (i < EI_NIDENT)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		i++;
	}
}

/**
 * _printclass - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void _printclass(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE: /*if (e_ident[EI_CLASS] == ELFCLASSNONE)*/
		printf("none\n");
		break;
	case ELFCLASS32: /*if (e_ident[EI_CLASS] == ELFCLASS32)*/
		printf("ELF32\n");
		break;
	case ELFCLASS64: /*if (e_ident[EI_CLASS] == ELFCLASS64)*/
		printf("ELF64\n");
		break;
	default: /*ELSE Print this*/
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _printdata - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: void
 */

void _printdata(unsigned char *e_ident)
{
	printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * _printversion - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: void
 */

void _printversion(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * _printosabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: void
 */

void _printosabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * _printabi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 * Return: void
 */

void _printabi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * _printtype - Prints the type of an ELF header.
 * @e_type: ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: void
 */

void _printtype(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * _printentry - Prints entry point of ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to array containing the ELF class.
 * Return: void
 */

void _printentry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * _closeelf - Closes an ELF file.
 * @elf: file descriptor of the ELF file.
 * Description: If the file cannot be closed - exit code 98
 * Return: void
 */

void _closeelf(int elf)
{
	int closed;

	closed = close(elf);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: argument count
 * @argv: argument vector.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int opened_file, read_file;

	opened_file = open(argv[1], O_RDONLY);
	if (opened_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		_closeelf(opened_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(opened_file, header, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(header);
		_closeelf(opened_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	_checkelf(header->e_ident);
	printf("ELF Header:\n");
	_printmagic(header->e_ident);
	_printclass(header->e_ident);
	_printdata(header->e_ident);
	_printversion(header->e_ident);
	_printosabi(header->e_ident);
	_printabi(header->e_ident);
	_printtype(header->e_type, header->e_ident);
	_printentry(header->e_entry, header->e_ident);

	free(header);
	_closeelf(opened_file);
	return (0);
}
