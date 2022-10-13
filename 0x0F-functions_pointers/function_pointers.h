#ifndef HEADER_FILE
#define HEADER_FILE

int _putchar(char c);
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
