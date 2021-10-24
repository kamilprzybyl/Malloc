#include "libft.h"

int *ft_count_chars(char *s, char delimiter)
{
    int     i;
    int     x;
    int     count;
    int     *arr;

    if(!(arr = malloc(sizeof(int) * ft_count_words(s, delimiter))))
        return (NULL);
    i = 0;
    x = 0;
    while (s[i] != '\0')
    {
        if (s[i] != delimiter)
        {
            count = 0;
            while (s[i] != delimiter && s[i] != '\0')
            {
                count++;
                i++;
            }
            arr[x++] = count;
        }
        else
            i++;
    }
    return (arr);
}