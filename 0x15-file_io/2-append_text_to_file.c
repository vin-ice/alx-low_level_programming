#include "main.h"
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * 
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, count;
    int open_flags = O_WRONLY | O_APPEND;
    ssize_t f_w;
    char c;

    if (filename == NULL)
        return (-1);
    fd = open(filename, open_flags);
    if (fd == -1)
        return (-1);
    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }
    for (count = 0; (c = text_content[count]); count++)
    {
        f_w = write(fd, &c, 1);
        if (f_w == -1)
        {
            close(fd);
            return (-1);
        }
    }
    return (1);
}