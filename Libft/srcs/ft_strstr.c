#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int     h;
    int     n;
    int     len;

    h = 0;
    n = 0;
    len = (int)ft_strlen(needle);

    if (len == 0)
        return ((char *)haystack);

    while (haystack[h] != '\0')
    {
        if (haystack[h] == needle[n])
        {
            while (haystack[h] == needle[n] && haystack[h] != '\0')
            {    
                h++;
                n++;
            }
            if (n == len)
                return ((char *)&(haystack[h - len]));
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