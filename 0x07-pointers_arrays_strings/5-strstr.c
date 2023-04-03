#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate or find
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle + j);
			}
		}
	}
	if (haystack[i] == needle[j])
		return (needle + j);
	return (0);
}
