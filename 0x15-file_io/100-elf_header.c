#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * print_magic - prints the magic numbers of an ELF header
 * @e_ident: a pointer to an array containing the ELF magic numbers
 * Description: magic numbers are seperated by spaces
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < sizeof(header.e_ident; i++)
	{
	printf("%02x", header.e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - prints the class of an ELF header
 * @e_ident: a pointer to an array containing the ELF class
 */

void print_class(unsigned char *e_ident)
{
	printf("Class: ");
	switch (header.e_ident[EI_CLASS])
	{
	case 1:
	printf("ELF32\n");
	break;
	case 2:
	printf("Elf64\n");
	break;
	default:
	printf("Unknown\n");
	}
}

/**
 * print_data - prints the data of an ELF header
 * @e_ident: a pointer to an array containing the ELF class
 */

void print_data(unsigned char *e_ident)
{
	printf("Data: ");
	switch (header.e_ident[EI_DATA])
	{
	case 1:
		printf("2's complement, little endian\n");
		break;
	case 2:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: a pointer to an array containing the ELF version
 */

void print_version(unsigned char *e_ident)
{
	printf("Version: %d(current)\n", header.e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: a pointer to an array containing the ELF version
 */

void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI: ");
	switch (header.e_ident[EI_OSABI])
	{
	case 0:
		printf("UNIX - System V\n");
		break;
	case 1:
		printf("HP - UX\n");
		break;
	case 2:
		printf("NetBSD\n");
		break;
	case 3:
		printf("Linux\n");
		break;
	case 4:
		printf("Sun Solaris\n");
		break;
	case 5:
		printf("FreeBSD\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}

/**
 * print_abi - prints the abi version of an ElF header
 * @e_ident: a pointer to an array containing the ELF ABI version
 */

void print_abi(unsigned char *e_ident)
{
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF header
 * @e_type: the ELF type
 * @e_ident: a pointer to an array containing the ELF class
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	printf("Type: ");
	switch (header.e_type)
	{
	case 1:
		printf("REL(Relocatable file)\n");
		break;
	case 2:
		printf("EXEC(Executable file)\n");
		break;
	case 3:
		printf("DYN(Shared object file)\n");
		break;
	case 4:
		printf("CORE(core file)\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}

/**
 * print_entry - prints the entry point of an ELF header
 * @e_entry: the address of the ELF entry point
 * @e_ident: a pointer to an array containing the ELF class
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address: 0x%lx\n", header.e_entry);
}

/**
 * close_elf - closes an ELF file
 * @elf: the file descriptor of the ELF file
 * Description: if the file cannot be closed exit code 98
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
	exit(98);
	}
}
	int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Invalid number of arguments");
	}
	print_elf_header(argv[1]);
	return (0);
}
