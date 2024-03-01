#include "main.h"

int is_separator(char c)
{
    char separators[] = {'\t', '\n', ' ', ',', ';', '!', '.', '?', '\"', '(', ')', '{', '}'};
    int i;
    
    for ( i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
	{
            return 1;
	}
    }

    return 0; 
}

char *cap_string(char *s)
{
	int i, cap = 1;

	for ( i = 0; s[i] != '\0'; i++)
	{
		if (cap == 1 && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))  && ( i == 0 || is_separator(s[i - 1])))
		{
			s[i] -= 32;
			cap = 0;
		}
		if (is_separator(s[i]))
		{
			cap = 1;
		}

	}
	return (s);
}
