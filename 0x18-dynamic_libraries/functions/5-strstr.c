#include "../main.h"

/**
 * _strstr - locates substing
 * @haystack: String to search.
 * @needle: Substring to find.
 *
 * Description: locates a substring in a string.
 *
 * Return: ptr to the first byte of the found substring,
 * or null.
 */

char *_strstr(char *haystack, char *needle)
{
	int c = 0;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			for (c = 1; needle[c]; c++)
			{
				if (*(haystack + c) != needle[c])
					break;
			}
		}

		if (needle[c] == '\0')
			return (haystack);

		haystack++;
	}
	return (needle[0] == '\0' ? haystack : NULL);
}
