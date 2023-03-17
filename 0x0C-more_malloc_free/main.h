#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char **argv);
int check_number(char *str);
unsigned int string_length(char *str);
void print_string(char *str);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
int _putchar(char c);

#endif
