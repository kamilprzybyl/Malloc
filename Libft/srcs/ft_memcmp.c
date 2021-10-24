#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int             i;
    unsigned char   *temp;
    unsigned char   *temp2;

    i = 0;
    temp = (unsigned char *) s1;
    temp2 = (unsigned char *) s2;

    while (i != (int) n)
    {
        if (temp[i] != temp2[i])
            return (temp[i] -temp2[i]);
        i++;
    }

    return (0);
}