#include "libft.h"

int ft_dec_to_oct(int n)
{
    int octal;
    int i;

    octal = 0;
    i = 1;
    while (n != 0)
    {
        octal += (n % 8) * i;
        n /= 8;
        i *= 10;
    }
    
    return (octal);
}