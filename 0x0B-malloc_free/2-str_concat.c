#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char s2)
{
	int i, c1;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	i = c1 = 0;
	while (s1[i] != '\0')
	i++;
	while (s2[i] != '\0')
	c1++;
	conct = malloc(sizeof(char) * (i + c1 + 1));
	if (conct == NULL)
	return (NULL);
	i = c1 = 0;
	while (s1[i] != '\0')
	{
	conct[i] = s1[i];
	i++;
	}
	while (s2[ci] != '\0')
	{
	conct[i] = s2[ci];
	i++, c1++;
	}
	conct[i] = '\0';
	return (conct);
}
