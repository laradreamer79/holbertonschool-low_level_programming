#include "main.h"

/**
 * print_error - prints an error message and exits with status 98
 * @msg: the error message
 */
void print_error(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * check_elf - checks if file is an ELF file
 * @e_ident: pointer to ELF identification bytes
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7f ||
	    e_ident[1] != 'E' ||
	    e_ident[2] != 'L' ||
	    e_ident[3] != 'F')
		print_error("Error: Not an ELF file");
}

/**
 * print_magic - prints ELF magic bytes
 * @e_ident: ELF identification bytes
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < 15)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_class - prints ELF class (32/64)
 * @e_ident: ELF identification bytes
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[4] == 1)
		printf("ELF32\n");
	else if (e_ident[4] == 2)
		printf("ELF64\n");
	else
		printf("Invalid class\n");
}

/**
 * print_data - prints endianess
 * @e_ident: ELF identification bytes
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[5] == 1)
		printf("2's complement, little endian\n");
	else if (e_ident[5] == 2)
		printf("2's complement, big endian\n");
	else
		printf("Invalid data encoding\n");
}

/**
 * print_version - prints version
 * @e_ident: ELF identification bytes
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[6]);
	if (e_ident[6] == 1)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * print_osabi - prints OS/ABI
 * @e_ident: ELF identification bytes
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[7])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 3:
			printf("UNIX - Linux\n");
			break;
		default:
			printf("Other\n");
			break;
	}
}

/**
 * print_abiversion - prints ABI version
 * @e_ident: ELF identification bytes
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[8]);
}

/**
 * print_type - prints file type
 * @buffer: ELF header buffer
 */
void print_type(unsigned char *buffer)
{
	unsigned int type;

	type = buffer[16] | (buffer[17] << 8);

	printf("  Type:                              ");
	switch (type)
	{
		case 0:
			printf("NONE (None)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown type\n");
			break;
	}
}

/**
 * print_entry - prints entry point (works for 32 or 64 bit ELF)
 * @entry: pointer to entry bytes ((e_ident[4]==1)?4 bytes:8 bytes)
 * @class: 1=ELF32, 2=ELF64
 * @data: 1=little endian, 2=big endian
 */
void print_entry(unsigned char *entry, int class, int data)
{
	int i, start, end, step;

	printf("  Entry point address:               ");

	if (class == 1) /* 32-bit */
	{
		start = (data == 1) ? 3 : 0;
		end = (data == 1) ? -1 : 4;
		step = (data == 1) ? -1 : 1;

		for (i = start; i != end; i += step)
			printf("%02x", entry[i]);
	}
	else if (class == 2) /* 64-bit */
	{
		start = (data == 1) ? 7 : 0;
		end = (data == 1) ? -1 : 8;
		step = (data == 1) ? -1 : 1;

		for (i = start; i != end; i += step)
			printf("%02x", entry[i]);
	}

	printf("\n");
}

/**
 * main - displays ELF header info
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd, r;
	unsigned char buffer[64];

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Can't read file");

	r = read(fd, buffer, 64);
	if (r != 64)
		print_error("Error: Can't read ELF header");

	check_elf(buffer);

	printf("ELF Header:\n");
	print_magic(buffer);
	print_class(buffer);
	print_data(buffer);
	print_version(buffer);
	print_osabi(buffer);
	print_abiversion(buffer);
	print_type(buffer);
	print_entry(buffer + 24, buffer[4], buffer[5]);

	close(fd);
	return (0);
}

