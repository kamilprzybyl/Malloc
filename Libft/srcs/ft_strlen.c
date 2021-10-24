#include "libft.h"

int ft_strlen(const char *s) 
{
    int     len;
    
    len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}