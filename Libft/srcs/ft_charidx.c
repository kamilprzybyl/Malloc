#include "libft.h"

int ft_charidx(char *s, int c)
{
    int     i;
    
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }

    return (0);    
}