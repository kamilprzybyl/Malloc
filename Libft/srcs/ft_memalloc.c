#include "libft.h"

/* TO FIX */
void *ft_memalloc(size_t size)
{   
    void    *res;

    if ((res = malloc(size + 1)))
        return (ft_memset(res, '\0', (size + 1)));

    return (NULL);
}
