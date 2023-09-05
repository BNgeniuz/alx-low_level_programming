#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_osabi - fnxtn to print OS/ABI of an ELF header.
 * @h: array ptr containing the ELF version.
 */
void print_magic(Elf64_Ehdr h)
{
	int l;

	printf(" magic:  ");
	for (l = 0; l < EI_NIDENT; l++)
	printf("%2.2x%s", h.e_ident[l], l == EI_NIDENT - 1 ? "\n" : " ");
}



/**
 * print_class - function to prints class of an ELF header.
 * @h: array ptr containing the ELF field
 */
void print_class(Elf64_Ehdr h)
{
	printf(" Class:					");

	switch (h.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
	printf("none");
	break;
	case ELFCLASS32:
	printf("ELF32");
	break;
	case ELFCLASS64:
	printf("ELF64");
	break;
	}
	printf("\n");
}

/**
 * print_data - fnctn to prints data of an ELF header.
 * @h: array ptr containing the ELF class.
 */
void print_data(Elf64_Ehdr h)
{
	printf(" Data:					");

	switch (h.e_ident[EI_DATA])
	{
	case ELFDATANONE:
	printf("none");
	break;
	case ELFDATA2LSB:
	printf("2's complement, little endian");
	break;
	case ELFDATA2MSB:
	printf("2's complement, big endian");
	break;
	}
	printf("\n");
}

/**
 * print_version - fnxtn to prints version of an ELF header
 * @h: array ptr containing the ELF version.
 */
void print_version(Elf64_Ehdr h)
{
	printf(" Version:			%d",
	h.e_ident[EI_VERSION]);

	switch (h.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
	printf(" (current)");
	break;
	case EV_NONE:
	printf("%s", "");
	break;
	break;
	}
	printf("\n");
}

/**
 * print_osabi - fnxtn to print ELF osabi
 * @h: array ptr containing the ELF class.
 */
void print_osabi(Elf64_Ehdr h)
{
	printf(" OS/ABI:				");
	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
	printf("UNIX - System V");
	break;
	case ELFOSABI_HPUX:
	printf("UNIX - HP-UX");
	break;
	case ELFOSABI_NETBSD:
	printf("UNIX - NetBSD");
	break;
	case ELFOSABI_LINUX:
	printf("UNIX - Linux");
	break;
	case ELFOSABI_SOLARIS:
	printf("UNIX - Solaris");
	break;
	case ELFOSABI_AIX:
	printf("UNIX - AIX");
	break;
	case ELFOSABI_IRIX:
	printf("UNIX - IRIX");
	break;
	case ELFOSABI_FREEBSD:
	printf("UNIX - FreeBSD");
	break;
	case ELFOSABI_TRU64:
	printf("UNIX - TRU64");
	break;
	default:
	print_osabi_more(h);
	break;
	}
	printf("\n");
}


/**
 * print_osabi_more - fnxtn to print ELF osabi  more
 * @h: array ptr containing the ELF class.
 */
void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_MODESTO:
	printf("Novell - Modesto");
	break;
	case ELFOSABI_OPENBSD:
	printf("UNIX - OpenBSD");
	break;
	case ELFOSABI_STANDALONE:
	printf("Standalone App");
	break;
	case ELFOSABI_ARM:
	printf("ARM");
	break;
	default:
	printf("<UNKNOWN: %x>", h.e_ident[EI_OSABI]);
	break;
	}
}

/**
 * print_abiversion - fnxtn to print ABI version of an ELF header.
 * @h: array ptr containing the ELF ABI version.
 */
void print_abiversion(Elf64_Ehdr h)
{
	printf(" ABI Version:				%d\n",
	h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - fnxtn to printsan ELF header types
 * @h: array ptr containing the ELF class.
 */
void print_type(Elf64_Ehdr h)
{
	char *q = (char *)&h.e_type;
	int l = 0;

	printf(" Type:				");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
	l = 1;

	switch (q[l])
	{
	case ET_NONE:
	printf("NONE (None)");
	break;
	case ET_REL:
	printf("REL (Relocatable file)");
	break;
	case ET_EXEC:
	printf("EXEC (Executable file)");
	break;
	case ET_DYN:
	printf("DYN (Shared object file)");
	break;
	case ET_CORE:
	printf("CORE (Core file)");
	break;
	default:
	printf("<unknown>: %x", q[l]);
	break;
	}
	printf("\n");
}

/**
 * print_entry - fnxtn to prints an ELF header entry point
 * @h: array ptr containing the ELF class.
 */
void print_entry(Elf64_Ehdr h)
{
	int l = 0, length = 0;
	unsigned char *q = (unsigned char *)&h.e_entry;

	printf(" Entry point address:			0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
	l = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
	while (!q[l])
	l--;
	printf("%x", q[l--]);
	for (; l >= 0; l--)
	printf("%02x", q[l]);
	printf("\n");
	}
	else
	{
	l = 0;
	length = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
	while (!q[l])
	l++;
	printf("%x", q[l++]);
	for (; l <= length; l++)
	printf("%02x", q[l]);
	printf("\n");
	}
}


/**
 * main - prints the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: numb of args available to the program.
 * @argv: array of ptr to the args
 *
 * Return: 0 (success)
 *
 * Description: If not an ELF File or
 * the function fails - exit code with 98.
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr h;
	ssize_t d;
	int fd;

	if (argc != 2)

	dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]),
	exit(98);
	d = read(fd, &h, sizeof(h));
	if (d < 1 || d != sizeof(h))
	dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]),
	exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L'
	&& h.e_ident[3] == 'F')
	{
	printf("ELF Header:\n");
	}
	else
	dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entry(h);
	if (close(fd))
	dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd),
	exit(98);
	return (EXIT_SUCCESS);
}
