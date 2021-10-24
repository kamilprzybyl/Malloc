#include "libft.h"

char *ft_strncat(char *s1, char *s2, size_t n)
{
    int i;
    int x;

    i = strlen(s1);
    x = 0;
    
    while (s2[x] != '\0' && x < (int) n)
    {
        s1[i] = s2[x];
        i++;
        x++;
    }
    s1[i] = '\0';

    return (s1);
}