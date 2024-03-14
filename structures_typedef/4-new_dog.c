#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*tmp = *src;
		tmp++;
	}


}
