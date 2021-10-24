#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    int     i;
    
    i = 0;
    
    if (s)
        while (i < ft_strlen(s))
            f(&(s[i++]));
}