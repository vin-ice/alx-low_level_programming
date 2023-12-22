#define _POSIX_C_SOURCE 1
#define _XOPEN_SOURCE 500
#include <elf.h>
#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define _MAX_HDR_SIZE 64

typedef enum { false, true } bool;

/**
 * _get_machine - return machine type
 * @stream: buffer
 * @len: size of buffer
 *
 * Return: returns string
 */
static const char *_get_machine(const uint8_t *stream, size_t len) {
	unsigned short machine_type;
	static char str[20];

	if (!stream || len < 18) {
		return NULL;
	}

	machine_type = (stream[18] << 8) | stream[19];
	switch (machine_type) {
		case 0x0003:
			return "Intel 80386";
		case 0x3E00:
			return "Advanced Micro Devices X86-64";
		case 0x00B7:
			return "ARM";
		case 0x0028:
			return "ARM AArch64";
		default:
			sprintf(str, "Unknown (0x%04X)", machine_type);
            return str;
	}
}

/**
 * _get_type: prints type of elf file
 * @stream: byte stream
 */
static const char *_get_type(uint8_t *stream, size_t len)
{
	unsigned short type_value;
	static char str[20];

	if (!stream || len < 10) {
		return NULL;
	}

	type_value = (stream[9] << 8) & 0xFF;
	switch (type_value)
	{
		case 0: return "NONE";
		case 1: return "REL";
		case 2: return "EXEC";
		case 3: return "DYN";
		case 4: return "CORE";
		case 0xFE00:
		case 0xFE01:
				return "LOOS";
		case 0xFF00:
		case 0xFF01:
				return "HIPROC";
		default:
		{
			sprintf(str, "Unknown (0x%04X)", type_value);
			return (str);
		}
	}
}

/**
 * _get_osabi - reaturns OS/ABI
 * @stream: stream of bytes;
 */
static const char *_get_osabi(uint8_t *stream, size_t len)
{
	const char *osabi_13[] = {
		"UNIX - System V", "HP-UX", "UNIX - NetBSD",
		"Linux ABI", "GNU_ELF", "",
		"UNIX - Solaris", "AIX ABI", "IRIX ABI",
		"FreeBSD ABI", "TRU64 UNIX ABI", "Novell Modesto",
		"Open BSD"
	};
	int value;
	const char *str;

	if (stream && len > 8)
	{
		value = (stream[7] & 0xFF);
		if (value <= 13)
		{
			str = osabi_13[value];
		} else if (value == 64)
		{
			str = "ARM architecture EABI";
		} else if (value == 97)
		{
			str = "ARM ABI";
		} else if (value == 255)
		{
			str = "Standalone (embedded) application";
		}
	}
	return (str);
}

/**
 * _is_elf - check if it is an elf file.
 * @stream: array holding the bytes read.
 * Return: 1 if it is an elf file. 0 if not.
 */
static bool _is_elf(uint8_t *stream)
{
	const uint8_t elf_magic_id[4] = { 0x7F, 0x45, 0x4C, 0x46 };

	if (stream)
	{
		if (memcmp(stream, elf_magic_id, 4) == 0)
			return (true);
	}
	return (false);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd = -1, count = 0;
	FILE *file;
	ssize_t n_read;
	uint8_t buff[_MAX_HDR_SIZE];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	file = fopen(argv[1], "rb");
	if (file == NULL)
	{
		fprintf(stderr, "ERROR: %s:\n", strerror(errno));
		exit(98);
	}
	fd = fileno(file);
	lseek(fd, 0L, SEEK_SET);

	n_read = read(fd, buff, _MAX_HDR_SIZE);
	if (n_read == -1)
	{
		fprintf(stderr, "ERROR: %s\n", strerror(errno));
		exit(98);
	}
	fclose(file);

	if (!_is_elf(buff))
	{
		fprintf(stderr, "ERROR: file: %s is not an ELF!\n", argv[1]);
		exit(98);
	}

	fprintf(stdout, "ELF Header:\n");
	fprintf(stdout, "  Magic:   ");
	for (count = 0; count < 16; count++) {
		fprintf(stdout, "%02x ", buff[count]);
	}
	fprintf(stdout, "\n");
	fprintf(stdout, "  Class:                             %s\n",
			((buff[4] == 1) ? "ELF32" : "ELF64"));
	fprintf(stdout, "  Data:                              2's complement, %s\n",
			(buff[5] == 1) ? "little endian" : "big endian");
	fprintf(stdout, "  Version:                           %s\n",
			(buff[6] == 1) ? "1 (current)" : "0 (invalid)");
	fprintf(stdout, "  OS/ABI:                            %s\n",
			_get_osabi(buff, n_read));
	fprintf(stdout, "  ABI Version:                       %d\n",
			((buff[7] << 8) & 0xFF));
	fprintf(stdout, "  Type:                              %s\n",
			_get_type(buff, n_read));
	fprintf(stdout, "  Machine:                           %s\n",
			_get_machine(buff, n_read));
	return (0);
}

