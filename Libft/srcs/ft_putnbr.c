#include "libft.h"

void ft_putnbr(int n)
{
    char    *s;

    s = ft_itoa(n);

    ft_putstr(s);
}