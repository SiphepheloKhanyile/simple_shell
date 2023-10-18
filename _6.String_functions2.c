#include "shell.h"
/**
 *_String_Length - Function to calculate length of the string
 *@string: string
 *Return: the length os string
 */
int _String_Length(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 *_strncmp - Function to compare two strings
 *@string1: 1st string to comparate
 *@string2: 2nd string to comparate
 *@number: the number of characters to comparate
 *Return: 0 is success o -1 is fail
 */

int _strncmp(char *string1, char *string2, int number)
{

	int i = 0;

	do {
		if (string1[i] != string2[i])
			return (-1);

		i++;

	} while (i != number);

	return (0);
}

/**
 * Putchar_ - Functio to write a character c to the stdout
 * @c: Input character to print
 * Return: On success 1, -1 if failed.
 */
int Putchar_(char c)
{
	return (write(1, &c, 1));
}
