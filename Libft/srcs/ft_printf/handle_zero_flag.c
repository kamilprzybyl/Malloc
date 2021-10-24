#include "ft_printf.h"


void handle_zero_flag(t_info *info, int spec)
{
    int     j;

    j = 0;

    info->zero_flag_val = info->width_val - ft_strlen(info->res);

    if ((info->flags & POUND_SIGN) && (spec == 'x' || spec == 'X')) 
        info->zero_flag_val -= 2;
    if ((info->flags & POUND_SIGN) && spec == 'o')
        info->zero_flag_val -= 1;
    
    if (info->zero_flag_val > info->precision_val)
        while (j++ < info->zero_flag_val)
            ft_putchar('0');
    else
        info->zero_flag_val = 0;
}