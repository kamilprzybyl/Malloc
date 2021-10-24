#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
    int     i;
    int     x;
    
    i = ft_strlen(s1);
    x = 0;
    
    while (s2[x] != '\0')
    {
        s1[i] = s2[x];
        i++;
        x++;
    }
    s1[i] = '\0';

    return (s1);
}
