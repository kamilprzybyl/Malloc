#include "ft_printf.h"


void handle_hex(t_info *info, va_list va_arg_list)
{
    handle_lenght_modifier(info, va_arg_list, 'x');

    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'x');
    if (info->flags & POUND_SIGN)
        ft_putstr("0x");                        
    if (info->flags & ZERO_FLAG)
        handle_zero_flag(info, 'x');
    if (info->precision)
        handle_precision(info, 'x');

    ft_putstr(info->res);

    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'x');

    free(info->res);    
}


void handle_heX(t_info *info, va_list va_arg_list)
{
    handle_lenght_modifier(info, va_arg_list, 'X');

    if (info->flags & ZERO_FLAG)
        handle_zero_flag(info, 'X');
    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'X');
    if (info->flags & POUND_SIGN)
        ft_putstr("0X");   
    if (info->precision)
        handle_precision(info, 'X');

    ft_putstr(info->res); 
    
    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'X');   

    free(info->res);    
}