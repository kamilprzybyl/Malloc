#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    char    *str;
    int     i;
    
    i = 0;

    if (s)
    {
        if (!(str = malloc((ft_strlen(s) + 1) * sizeof(char))))
            return (NULL);
        while (i < ft_strlen(s))
        {    
            str[i] = f(s[i]);
            i++;
        }
        str[i] = '\0';
    
        return (str);
    }

    return (0);
}