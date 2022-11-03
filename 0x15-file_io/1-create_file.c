#include "main.h"
/**
 * create_file - creates a file
 * @filename: Name of file
 * @text_content:  Content to put in
 * 
 * Return: 1 on success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
    int fd, count;
    int open_flags = O_WRONLY | O_CREAT | O_TRUNC;
    mode_t file_pes = S_IRUSR | S_IWUSR; 
    ssize_t f_w;
    char ch;

    if (filename == NULL)
        return (-1);
    fd = open(filename, open_flags, file_pes);
    if (fd == -1)
        return (-1);
    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }
    for (count = 0; (ch = text_content[count]); count++)
    {
        f_w = write(fd, &ch, 1);
        if (f_w == -1)
            return (-1);
    }
    close(fd);
    return (1);
}
