#include "shell.h"

/**
 * _String_Comp - program to concatenate n chars of src to dest
 * @s1	 : pointer to Destination string
 * @s2   : pointer to source string
 * Return: 0 on success else -1 is returned.
 */
int _String_Comp(char *string1, char *string2)
{
	int i = 0;

	while (string1[i] != '\0' || string2[i] != '\0')
	{
		if (string1[i] != string2[i])
		{
			return (string1[i] - string2[i]);

		}
	i++;

	}

	return (0);
}
