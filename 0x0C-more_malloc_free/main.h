#ifndef _MAIN_H_
#define _MAIN_H_

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *s);
int _putchar(char c);
unsigned int *initDigitArray(size_t size);
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits,
		       char *n2_digits, size_t n1_len, size_t n2_len);
int stringIsPosInt(char *s);
void error(int status);
int main(int argc, char **argv);

#endif
