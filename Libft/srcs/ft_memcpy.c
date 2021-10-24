#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    int     i;
    char    *temp;  
    char    *temp2;

    if (n > 0 && !dst && !src)
        return (NULL);

    i = 0;
    temp = (char *)dst;
    temp2 = (char *)src;
    
    while (i != (int)n)
    {
        temp[i] = temp2[i];
        i++;
    }

    return (dst);
}