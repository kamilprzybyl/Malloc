#include "libft.h"

/* TO CHECK */

char *ft_strnew(size_t size)
{
    char    *res;

    if ((res = malloc(sizeof(char) * (size + 1))))
        return (ft_memset(res, '\0', (size + 1)));

    
    return (NULL);
}