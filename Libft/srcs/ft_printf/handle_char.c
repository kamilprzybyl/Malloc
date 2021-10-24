#include "ft_printf.h"


void handle_char(t_info *info, va_list va_arg_list)
{
    handle_lenght_modifier(info, va_arg_list, 'c'); 

    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'c');

    ft_putchar(info->ll_int_field); 

    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'c');   
}


void handle_u_char(t_info *info, va_list va_arg_list)
{
    handle_lenght_modifier(info, va_arg_list, 'u');

    if ((info->flags & ZERO_FLAG))
        handle_zero_flag(info, 'u');
    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'u');
    if (info->precision)
        handle_precision(info, 'u');

    ft_putstr(info->res);
    
    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'u');

    free(info->res);    
}
