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
    ssize_t fRW;

    if (filename == NULL)
        return (0);
    fdIn = open(filename, O_RDONLY);
    if (fdIn == -1)
        return (0);
    buff = malloc(sizeof (char) * letters + 1);
    if (buff == NULL)
        return (0);
    /*read from file to buffer*/
    fRW = read(fdIn, (void *) buff, letters);
    if (fRW == -1)
    {
        free(buff);
        close(fdIn);
        return (0);
    }
    fRW = write(STDOUT_FILENO, (void *) buff, letters);
    if (fRW == -1 || fRW < (ssize_t) letters)
    {
        free(buff);
        close(fdIn);
        return (-1);
    }
    free (buff);
    close (fdIn);
    return (fRW);
}