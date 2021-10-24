#include "libft.h"

char *ft_itoa(long long int n)
{
    char    *res;
    int     i;
    int     sign;

    i = 0;
    sign = 1;

    if (!(res = malloc(120 * sizeof(char))))
        return (NULL); 

    if (n < 0)
        sign = -1;
    else if (n == 0)
        res[i++] = '0';
    
    while (n != 0)
    { 
        res[i++] = ((n % 10) * sign) + 48;
        n /= 10;
    } 
    if (sign == -1)
        res[i++] = '-';
    
    res[i] = '\0';

    return (ft_strrev(res));
}