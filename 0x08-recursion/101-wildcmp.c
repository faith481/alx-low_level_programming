#include "main.h"

/**
 *  wildcmp - compare two strings and returns them
 *  @s1: string 1.
 *  @s2: string 2. it can contain a * as a special character
 *  Return: 1 if are identical, if not 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
