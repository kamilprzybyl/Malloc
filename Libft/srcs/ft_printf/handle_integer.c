#include "ft_printf.h"


void handle_integer(t_info *info, va_list va_arg_list)
{
    handle_lenght_modifier(info, va_arg_list, 'd');

    if (info->flags & ZERO_FLAG)
        handle_zero_flag(info, 'd');
    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'd');
    if (info->flags & PLUS_SIGN)
        ft_putchar('+');
    if (info->precision)
        handle_precision(info, 'd');

    ft_putstr(info->res);
    
    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'd');
    
    free(info->res); 
}