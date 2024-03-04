#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter, i;

	for (i = 0; *s != '\0'; i++)
	{
		const char *acceptPtr = accept;

		for (; *acceptPtr != '\0'; acceptPtr++)
		{
			if (*acceptPtr == *s)
			{
				counter++;
				break;
			}
		}
		if (*acceptPtr == '\0')
			break;
	}
	return (counter);
}
