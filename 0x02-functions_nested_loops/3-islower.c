#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter lowercase or 0 uppercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);


	return (0);
}
