#include "main.h"
/**
 * read_textfile - reads a text file and prints to std out
 * @filename: file name
 * @letters: number of letters to be read and printed
 * 
 * Return: returns number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fdIn; 
    char *buff;
    ssize_t f_r, f_w;

    if (filename == NULL)
        return (0);
    fdIn = open(filename, O_RDONLY);
    if (fdIn == -1)
        return (0);
    buff = malloc(sizeof (char) * letters);
    if (buff == NULL)
        return (0);
    /*read from file to buffer*/
    f_r = read(fdIn, buff, letters);
    if (f_r == -1)
    {
        free(buff);
        close(fdIn);
        return (0);
    }
    f_w = write(STDOUT_FILENO, buff, letters);
    if (f_w == -1 || f_w < (ssize_t) letters)
    {
        free(buff);
        close(fdIn);
        return (-1);
    }
    free (buff);
    close (fdIn);
    return (f_w);
}
