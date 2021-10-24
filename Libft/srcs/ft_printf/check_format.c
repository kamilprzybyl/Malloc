#include "ft_printf.h"


t_call_fucntion spec_table[] = 
{
    {handle_integer, 'd'},      
    {handle_integer, 'D'},      
    {handle_integer, 'i'},      
    {handle_octal, 'o'},
    {handle_octal, 'O'},
    {handle_u_char, 'u'},
    {handle_u_char, 'U'},
    {handle_hex, 'x'},
    {handle_heX, 'X'},
    {handle_char, 'c'},
    {handle_char, 'C'},
    {handle_string, 's'},
    {handle_string, 'S'},
    {handle_pointer, 'p'},
    {NULL, '\0'}
};


int check_flag(t_info *info, int flag)
{
    if (flag == '#')
    {
        info->flags |= POUND_SIGN;
        return  (true);
    }
    else if (flag == '0')
    {
        info->flags |= ZERO_FLAG;
        return (true);
    }
    else if (flag == '+')
    {
        info->flags |= PLUS_SIGN;
        return (true);
    }
    else if (flag == '-')
    {
        info->flags |= MINUS_SIGN;
        return (true);
    }
    return (false);
}


void check_width(t_info *info, const char *format, int *i)
{
    info->width_val = ft_atoi(&(format[*i]));
    while (ft_isdigit(format[*i])) 
        (*i)++;

    info->width = true;
}

void check_prec(t_info *info, const char *format, int *i)
{
    (*i)++;
    info->precision_val = ft_atoi(&(format[*i]));
    while (ft_isdigit(format[*i]))
        (*i)++;

    info->precision = true;    
}


int check_len_mod(t_info *info, int spec)
{
    if (spec == 'h')
    {
        info->len_mod = MOD_H;
        if (spec == 'h')
            info->len_mod = MOD_HH;
        return (true);
    }
    else if (spec == 'l')
    {
        info->len_mod = MOD_L;
        if (spec == 'l')
            info->len_mod = MOD_LL;
        return (true);
    }
    else if (spec == 'z')
    {
        info->len_mod = MOD_Z;
        return (true);
    }
    else if (spec == 'j')
    {
        info->len_mod = MOD_J;
        return (true);
    }
    return (false);
}


int check_spec(t_info *info, va_list va_arg_list, char spec)
{
    int i;

    i = 0;

    while (spec_table[i].fct)
    {
        if (spec_table[i].spec == spec)
        {
            spec_table[i].fct(info, va_arg_list);
            return (true);
        }
        i++;
    }
    return (false);
}