#include "main.h"

/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s(i] != '\0'; i++)
	{
		if (s[i] != ' ' || s[i] != '\n' || s[i] != 9 || s[i] != ',' || s[i] != ';' || s[i] != '.' || s[i] != '!' || s[i] != '?' || s[i] != '"' || s[i] != '(' || s[i] != ')' || s[i] != '{' || s[i] != '}' ||)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
                        {
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
