#include "holberton.h"
/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				s = &s[i]
				return (s);
		}

	}
	return ('\0');
}
