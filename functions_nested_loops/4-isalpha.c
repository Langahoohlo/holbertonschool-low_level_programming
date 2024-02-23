#include "main.h"

/**
 * _isalpha - checks for if its alphabet
 * @c : parameter declaration
 * Return : exit _isaplha
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
