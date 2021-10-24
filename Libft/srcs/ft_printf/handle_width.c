#include "ft_printf.h"


void handle_width(t_info *info, char spec)
{
    int     j;

    j = 0;

    if (spec == 'c')
        info->width_val -= 1;
    else if (spec == 's')
    {
        if (info->precision && info->precision_val < ft_strlen(info->res))
            info->width_val -= info->precision_val;
        else
            info->width_val -= ft_strlen(info->res);
    }
    else
    {
        if (info->precision && info->precision_val > ft_strlen(info->res))
            info->width_val -= info->precision_val;
        else
            info->width_val -= ft_strlen(info->res);
    }

    if ((info->flags & PLUS_SIGN) || ((info->flags & POUND_SIGN) && spec == 'o'))
        info->width_val -= 1;
    if (((info->flags & POUND_SIGN) && (spec == 'x' || spec == 'X')) || spec == 'p')
        info->width_val -= 2;
    if (info->flags & ZERO_FLAG)
        info->width_val -= info->zero_flag_val;
    
    while (j++ < info->width_val)
        ft_putchar(' ');
}