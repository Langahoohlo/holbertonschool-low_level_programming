#include "main.h"

/**
 * _strspn -function to get prefix of length
 * @s:argument
 * @accept:argument recieved
 * Return:return count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		const char *acceptPtr = accept;

		while (*acceptPtr != '\0')
		{
			if (*acceptPtr == *s)
			{
				count++;
				break;
			}
			acceptPtr++;
		}
		if (*acceptPtr == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
