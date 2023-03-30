#include "main.h"
/**
 * leet - encoding
 * @str: string to be encoded
 * Return: str
 */

char *leet(char *)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (i = 0 ; a[i] != '\0' ; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	}
	return (str);
}
