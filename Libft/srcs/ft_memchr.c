#include "libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
    int     i;
    char    *temp;
    
    i = 0;
    temp = (char *) s;
    
    while (i != (int) n)
    {
        if (temp[i] == c)
            return (&temp[i]);
        i++;
    }
    return (NULL);
}