#include "shell.h"

/**
 * Puts_ - function to print a string
 * @string : the pointer to char being passed
 * Return:  void
 */
void Puts_(char *string)
{
	int i = 0;

	while (*(string + i) != '\0')
	{
		Putchar_(*(string + i));
		i++;


	}
		Putchar_('\n');

}
