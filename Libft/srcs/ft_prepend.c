#include "libft.h"

void ft_prepend(char *s, char *t)
{
    char    *temp;
    temp = malloc(sizeof(char) * (ft_strlen(s) + ft_strlen(t)));

    ft_strcpy(temp, s);             // safe s content

    ft_bzero(s, ft_strlen(s));      // clear s    
    ft_strcpy(s, t);                // copy t to s
    ft_strcat(s, temp);             // concatenate temp to s

    free(temp);
}