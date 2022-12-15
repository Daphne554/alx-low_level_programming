#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes characte c to stdout
 * @c:char to print
 *
 * Return: On success 1
 * -1 return on error, set errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
