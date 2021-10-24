#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int     h;
    int     n;
    int     l;

    h = 0;
    n = 0;
    l = (int)ft_strlen(needle);

    if (l == 0)
        return ((char *)haystack);

    while (haystack[h] != '\0' && h != (int)len)
    {
        if (haystack[h] == needle[n])
        {
            while (haystack[h] == needle[n] && haystack[h] != '\0')
            {    
                h++;
                n++;
            }
            if (n == l)
                return ((char *)&(haystack[h - l]));
            else
            {    
                h++;
                n = 0;
            }
        }
        else
            h++;
    }
    return (NULL);
}