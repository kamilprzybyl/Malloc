#include "ft_printf.h"


void reset_info(t_info *info)
{
    info->width = 0;
    info->width_val = 0;
    info->precision = 0;
    info->precision_val = 0;
    info->zero_flag_val = 0;
    info->len_mod = NO_MOD;
    info->flags = NO_FLAG;
    info->res = malloc(sizeof(char) * 256); // 256 is random number - fix this
}


int ft_printf(const char *restrict format, ...)
{
    va_list         va_arg_list;
    t_info          info;
    int             i;
    
    va_start(va_arg_list, format);
    i = 0;

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            reset_info(&info);
            i++;
            while (format[i])
            {
                if (check_flag(&info, format[i]) == true)
                    i++;
                else if (ft_isdigit(format[i]))
                    check_width(&info, format, &i);
                else if (format[i] == '.')
                    check_prec(&info, format, &i);
                else if (check_len_mod(&info, format[i]) == true)
                    i++;
                else if (check_spec(&info, va_arg_list, format[i]) == true)
                {
                    i++;
                    break;
                }
                else if (format[i] == '%')
                {
                    ft_putchar('%');
                    i++;
                    break;
                }
                else
                {
                    ft_putchar('%');
                    ft_putchar(format[i]);
                    i++;
                    break;
                }
            } 
        }
        else
        {
            ft_putchar(format[i]);
            i++;
        }
    }
    va_end(va_arg_list);

    return (0);
}