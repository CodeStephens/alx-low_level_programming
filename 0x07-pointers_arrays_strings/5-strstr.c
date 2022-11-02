#include "main.h"

/**
 * *_strstr - returns the first occurence of the substring
 * @haystack: given functional parameter to be scanned
 * @needle: string containing characters to be matched
 *
 * Description:
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (needle[j] != '\0')
		j++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
