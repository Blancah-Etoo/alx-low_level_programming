#include "main.h"
/**
 * *_strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < 0 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
