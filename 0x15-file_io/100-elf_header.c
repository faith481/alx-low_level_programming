#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_elf_header(const char *filename);
void print_error(const char *message);

void print_error(const char *message)
{
	fprintf(Stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(consr char *filename)
{
	int fd = open(filename, O_RDONLY);
	int (fd == -1)
	{
		print_error("Failed tto open file");
	}

	Elf64_Ehdr header;
	ssize_t num_read = read(fd, $header, sizeof(header));
	if (num_read != sizeof(header))
	{
	print_error("Failed to read ELF header");
	}
	close(fd);

	printf("Magic: ");
	for (int i =0; i < sizeof(header.e_ident; i++)
	{
	printf("%02x", header.e_ident[i]);
	}
	printf("\n");

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
	break;
}

	printf("Data: ");
	switch (header.e_ident[EI_DATA])
{
	case 1:
	printf("2's complement, little endian\n");
	case 2:

