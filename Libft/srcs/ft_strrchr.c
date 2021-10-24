#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int     i;

    i = 0;
    
    while (i != (int)ft_strlen(s))
        i++;
    
    while (i != -1)
    {
        if (s[i] == (char)c)
            return ((char *) &(s[i]));
        i--;
    }

    return (0);
}