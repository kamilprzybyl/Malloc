#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    int     i;

    i = 0;

    while (i != (int) n)
    {
        ((char *)s)[i] = '\0';
        i++;
    }
}