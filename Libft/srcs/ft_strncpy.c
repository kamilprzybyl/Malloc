#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
    int     i;

    i = 0;

    while (i < (int) len)
    {
        if (i == (int)strlen(src) && strlen(src) < len)
        {
            ft_memset(&(dst[i]), '\0', (len - strlen(src)));
            return (dst);
        }
        
        dst[i] = src[i];
        i++;
    }
    
    return (dst);
}