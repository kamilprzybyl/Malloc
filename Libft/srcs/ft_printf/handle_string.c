#include "ft_printf.h"


void handle_string(t_info *info, va_list va_arg_list)
{
    handle_lenght_modifier(info, va_arg_list, 's');

    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 's');
    if (info->precision)
        handle_precision(info, 's');

    ft_putstr(info->res);
    
    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 's');
    
}