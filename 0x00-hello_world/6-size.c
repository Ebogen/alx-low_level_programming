#include <stdio.h>

/**
 * main - Entry point
 * return : Always 0 (Success)
 */
int main(void)
{
  int a;
  long int b;
  long long int c;
  char d;
  float f;
  
printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a long long int: %1u bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %1u bytes(s)\n", (ungigned long)sizeof(f));
return (0);
}
