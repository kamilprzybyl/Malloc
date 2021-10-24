#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *sub;
    int     i;
    int     x;
        
    i = 0;
    x = 0;

    if (!s1 || !s2)
        return (0);

    if (!(sub = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))))
        return (NULL);

    while (s1[i] != '\0')
    {
        sub[i] = s1[i];
        i++;
    }
    
    while (s2[x] != '\0')
        sub[i++] = s2[x++];
    
    sub[i] = '\0';

    return (sub);
}