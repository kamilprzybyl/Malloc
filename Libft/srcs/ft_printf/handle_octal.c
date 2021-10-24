#include "ft_printf.h"


void handle_octal(t_info *info, va_list va_arg_list)
{
    handle_lenght_modifier(info, va_arg_list, 'o');

    if (info->flags & ZERO_FLAG)
        handle_zero_flag(info, 'o');
    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'o');                
    if (info->flags & POUND_SIGN)
        ft_putchar('0');
    if (info->precision)
        handle_precision(info, 'o');

    ft_putstr(info->res); 
    
    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'o');   

    free(info->res);   
}