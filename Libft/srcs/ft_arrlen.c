#include "libft.h"

int ft_arrlen(char **array)
{
    int     len;

    len = 0;

    while (array[len])
        len++;

    return (len);
}