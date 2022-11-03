#include "main.h"
/**
 * main - copies content of a file to another file
 * @argc: arguments count
 * @argv: arguments vector
 * 
 * Return: 1 ons success ot 0
 */
int main(int argc, char *argv[])
{
    int fd_in, fd_out, f_r, f_w;
    ssize_t flags_fro = O_RDONLY, flags_to = O_WRONLY | O_TRUNC | O_CREAT;
    char * buff;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    fd_in = open(argv[1], flags_fro);
    if (fd_in == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    fd_out = open(argv[2], flags_to, 0664);
    if (fd_out == -1)
    {
        dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    buff = malloc(sizeof (char) * 1024);
    if (buff == NULL)
        return (-1);
    for (; (f_r = read(fd_in, buff, 1024)) > 0;)
    {
        f_w = write(fd_out, buff, 1024);
        if (f_w == -1)
        {
            dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }
    dprintf(fd_out, "\n");
    if (close(fd_in) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
        exit(100);
    }
    if (close(fd_out) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
        exit(100);
    }
    return (1);
}