#include "libft.h"

void *ft_memccpy(void * restrict dst, const void *restrict  src, int c, size_t n)
{
    int     i;
    char    *temp;
    char    *temp2;

    i = 0;
    temp = (char *)dst;
    temp2 = (char *)src;
    
    while (i != (int)n)
    {
        temp[i] = temp2[i];
        if (temp2[i] == (unsigned char)c)
            return (&(temp[i+1]));
        i++;
    }
    
    return (NULL);
}