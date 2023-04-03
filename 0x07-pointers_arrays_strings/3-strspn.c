#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: string to check in it
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}
		}
		if (s[j] == '\0')
			return (r);
	}
	return (r);
}
