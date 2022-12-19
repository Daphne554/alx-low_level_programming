#include <stdio.h>
#include "main.h"

/**
 *
 * _strcpy - copies string pointed to by src,
 * including terminating null byte to buffer pointed by destinaton
 * @dest: detination
 * @src: source
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
