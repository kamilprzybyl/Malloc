 #include "libft.h"

char *ft_strtrim(char const *s)
{
    int     i;
    int     c;
    int     a;
    char    *str;
    char    *temp;
    
    if (!s)
        return (0);

    if (!(str = malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);

    i = 0;
    c = 0;
    a = 0;
    temp = ft_strrev((char *)s);

    while (temp[a] != '\0')
    {
        if (temp[a] != ' ' && temp[a] != '\n' && temp[a] != '\t')
            break;
        a++;
    }
    while (s[i] != '\0')
    {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
            break;
        i++;
    }
    
    while (i < (ft_strlen(s) - a))
        str[c++] = s[i++];
    str[c] = '\0';

    return (str);
}