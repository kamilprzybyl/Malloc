#include "libft.h"

int ft_atoi(const char *str) 
{    
    int     res;
    int     sign;
    int     i;
    
    res = 0;
    i = 0;
    sign = 1;

    while (str[i] != '\0') 
    {
        if (str[i] < 48 || str[i] > 57 || (str[i] == '-' && i != 0))
            break;
        if (str[i] == '-') 
        {
            sign = -1;
            i++;
        }
        else if (str[i] == '.') 
            break;
            
        res = res * 10 + str[i++] - '0'; 
    }
    
    return (sign * res);
}