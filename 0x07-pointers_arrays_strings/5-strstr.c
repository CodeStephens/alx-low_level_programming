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
	char *initial;

	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*needle == *haystack)
			{
				haystack++;
				break;
			}
			else
			{
				haystack++;
				initial = haystack;
			}
		}
		needle++;
	}
	return (initial);
}
