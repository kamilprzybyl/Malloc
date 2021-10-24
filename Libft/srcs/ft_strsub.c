#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    int     i;
    int     x;

    i = 0;
    x = 0;
    if (!s)
        return (0);

    if (!(sub = malloc(sizeof(char) * (len + 1))))
        return (NULL);

    while (s[i] != '\0')
    {
        if (i == (int) start)
        {
            while (x < (int)len)
                sub[x++] = s[i++];
            sub[x] = '\0';

            return (sub);
        }
        i++;
    }
    return (0);
}