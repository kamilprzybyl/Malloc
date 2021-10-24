#include "ft_printf.h"

void handle_pointer(t_info *info, va_list va_arg_list)
{
    info->ll_int_field = va_arg(va_arg_list, long long int);
    info->res = ft_dec_to_hex(info->ll_int_field, 0);

    if (!(info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'p');  

    ft_putstr("0x");
    ft_putstr(info->res);

    if ((info->flags & MINUS_SIGN) && info->width)
        handle_width(info, 'p');  

    free(info->res);
}