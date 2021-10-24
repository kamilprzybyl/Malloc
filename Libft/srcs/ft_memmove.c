#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    int     i;
    char    *temp;
    char    *temp2;

    i = 0;
    temp = (char *)dst;
    temp2 = (char *)src;
    
    while (i != (int)len)
    {
        temp[i] = temp2[i];
        i++;
    }

    return (dst);
}