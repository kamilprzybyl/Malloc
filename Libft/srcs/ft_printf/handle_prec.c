#include "ft_printf.h"


void handle_precision(t_info *info, char spec)
{
    int     j;
    int     zeros_to_be_padded;
    
    j = 0;

    if (spec == 's')
        info->res[info->precision_val] = '\0'; 
    else
    {
        zeros_to_be_padded = info->precision_val - ft_strlen(info->res);
        
        while (j++ < zeros_to_be_padded)
            ft_putchar('0');
    }
}