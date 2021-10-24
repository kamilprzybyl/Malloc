#include "libft.h"

char *ft_ftoa(double n)
{
    int         ipart;
    double      fpart;
    int         after_dot;
    char        *res;

    ipart = (int)n;
    fpart = (n - (float)ipart);
    after_dot = 0;
    res = malloc(sizeof(char) * 20);

    while (after_dot < 6)
    {
        fpart = fpart * 10;
        after_dot++;
    }

    ft_strcpy(res, ft_itoa(ipart));
    ft_strcat(res, ".");
    ft_strcat(res, ft_itoa(fpart));

    return (res);
}