#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: input
 * @s2: input
 * @n: number of bytes
 * Return: points to a newly allocated space on memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len 1 = 0, len 2 = 0;

	while (s1 && s1[len 1])
	len1++;
	while (s2 && s2[len 2])
	len2++;
	if (n < len2)
	s = malloc(sizeof(char) * (len 1 + n + 1));
	else
	s = malloc(sizeof(char) * (len 1 + len 2 + 1));
	if (!s)
	return (NULL);
	while (i < len 1)
	{
	s[i] = s1[i];
	i++;
	}
	while (n < len 2 && i < (len 1 + n)
	s[i++] = s2[j++];
	while (n < len 2 && i < (len 1 + len 2))
	s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}

