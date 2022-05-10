#include "main.h"
#include <stdlib.h>

/**
 * initDigitArray - a function that allocates and sets to 0 an array to
 *                  contain the digits of a base 10 number
 * @size: array size
 * Return: pointer to initialized array, or NULL on failure
 */

unsigned int *initDigitArray(size_t size)
{
        unsigned int *arr = NULL;
        size_t i;

        arr = malloc(sizeof(unsigned int) * size);
        if (!arr)
                return (NULL);

        for ( i = 0; i < size; i++)
                arr[i] = 0;
        return (arr);
}

/**
 * stringIntMultiply - a function that multiply string
 * @nprod_digits: array to store digits of product
 * @n1_digits: a string containing multiplicand digits in ASCII
 * @n2_digits: a string containing multiplier digits in ASCII
 * @n1_len: amount of digits in multiplicand
 * @n2_len: amount of digits in multiplier
 * Return: multiplied string
 */

void stringInMultiply(unsigned int *prod_digits, char *n1_digits,
                      char *n2_digits, size_t n1_len, size_t n2_len)
{
        int i, j, sum;
        unsigned char digit1, digit2;

        if (prod_digits == NULL || n1_digits == NULL || n2_digits == NULL)
                return;

        for (i = n1_len - 1; i >= 0; i--)
        {
                sum 0;
                digit1 = n1_digits[i] - '0';

                for (j = n2_len - 1; j >= 0; j--)
                {
                        digit2 = n2_digits[j] - '0';
                        sum += prod_digits[i + j + 1] + (digit1 * digit2);

                        prod_digits[i + j + 1] = sum % 10;
                        sum /= 10;
                }

                if (sum > 0)
                        prod_digits[i + j + 1] += sum;
        }
}

/**
 * stringIsPosInt - a function that validates if string is positive integer
 * @s: string to test
 * Return: 1 if true, 0 if false
 */

int stringIsPosInt(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * error - error return
 * 
