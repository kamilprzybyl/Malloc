#include "ft_printf.h"


t_len_modifiers len_mod_table[] = 
{
    {handle_h, MOD_H},
    {handle_hh, MOD_HH},
    {handle_l, MOD_L},
    {handle_ll, MOD_LL},
    {handle_j, MOD_J},
    {handle_z, MOD_Z},
    {handle_no_len_mod, NO_MOD},
    {NULL, -1}
};


void handle_h(t_info *info, va_list va_arg_list, int spec)
{
    if (spec == 'd')
        info->ll_int_field = va_arg(va_arg_list, int);
    else if (spec == 'o')
        info->ll_int_field = ft_dec_to_oct(va_arg(va_arg_list, unsigned int));
    else if (spec == 'u' || spec == 'x' || spec == 'X')
        info->ll_int_field = va_arg(va_arg_list, unsigned int);

    if (spec == 'd' || spec == 'o' || spec == 'u')
        info->res = ft_itoa(info->ll_int_field);
    else if (spec == 'x')
        info->res = ft_dec_to_hex(info->ll_int_field, 0);
    else if (spec == 'X')
        info->res = ft_dec_to_hex(info->ll_int_field, 1);
}


void handle_hh(t_info *info, va_list va_arg_list, int spec)
{
    if (spec == 'd')
        info->ll_int_field = va_arg(va_arg_list, int);
    else if (spec == 'o')
        info->ll_int_field = ft_dec_to_oct(va_arg(va_arg_list, unsigned int));
    else if (spec == 'u' || spec == 'x' || spec == 'X')
        info->ll_int_field = va_arg(va_arg_list, unsigned int);

    if (spec == 'd' || spec == 'o' || spec == 'u')
        info->res = ft_itoa(info->ll_int_field);
    else if (spec == 'x')
        info->res = ft_dec_to_hex(info->ll_int_field, 0);
    else if (spec == 'X')
        info->res = ft_dec_to_hex(info->ll_int_field, 1);
}


void handle_l(t_info *info, va_list va_arg_list, int spec)
{
    if (spec == 'd')
        info->ll_int_field = va_arg(va_arg_list, long);
    else if (spec == 'o')
        info->ll_int_field = ft_dec_to_oct(va_arg(va_arg_list, unsigned long));
    else if (spec == 'u' || spec == 'x' || spec == 'X')
        info->ll_int_field = va_arg(va_arg_list, unsigned long);

    if (spec == 'd' || spec == 'o' || spec == 'u')
        info->res = ft_itoa(info->ll_int_field);
    else if (spec == 'x')
        info->res = ft_dec_to_hex(info->ll_int_field, 0);
    else if (spec == 'X')
        info->res = ft_dec_to_hex(info->ll_int_field, 1);

    // else if (spec == 'c')
    //     info->wint_t_field = va_arg(va_arg_list, wint_t);
    // else if (spec == 's')
        // info->wchar_t_field = va_arg(va_arg_list, wchar_t *);
}


void handle_ll(t_info *info, va_list va_arg_list, int spec)
{
    if (spec == 'd')
        info->ll_int_field = va_arg(va_arg_list, long long);
    else if (spec == 'o')
        info->ll_int_field = ft_dec_to_oct(va_arg(va_arg_list, unsigned long long));
    else if (spec == 'u' || spec == 'x' || spec == 'X')
        info->ll_int_field = va_arg(va_arg_list, unsigned long long);

    if (spec == 'd' || spec == 'o' || spec == 'u')
        info->res = ft_itoa(info->ll_int_field);
    else if (spec == 'x')
        info->res = ft_dec_to_hex(info->ll_int_field, 0);
    else if (spec == 'X')
        info->res = ft_dec_to_hex(info->ll_int_field, 1);
}


void handle_j(t_info *info, va_list va_arg_list, int spec)
{
    if (spec == 'd')
        info->ll_int_field = va_arg(va_arg_list, intmax_t);
    else if (spec == 'o')
        info->ll_int_field = ft_dec_to_oct(va_arg(va_arg_list, uintmax_t));
    else if (spec == 'u' || spec == 'x' || spec == 'X')
        info->ll_int_field = va_arg(va_arg_list, uintmax_t);

    if (spec == 'd' || spec == 'o' || spec == 'u')
        info->res = ft_itoa(info->ll_int_field);
    else if (spec == 'x')
        info->res = ft_dec_to_hex(info->ll_int_field, 0);
    else if (spec == 'X')
        info->res = ft_dec_to_hex(info->ll_int_field, 1);
}


void handle_z(t_info *info, va_list va_arg_list, int spec)
{
    if (spec == 'o')
        info->ll_int_field = ft_dec_to_oct(va_arg(va_arg_list, size_t));
    else if (spec == 'd' || spec == 'u' || spec == 'x' || spec == 'X')
        info->ll_int_field = va_arg(va_arg_list, size_t);

    if (spec == 'd' || spec == 'o' || spec == 'u')
        info->res = ft_itoa(info->ll_int_field);
    else if (spec == 'x')
        info->res = ft_dec_to_hex(info->ll_int_field, 0);
    else if (spec == 'X')
        info->res = ft_dec_to_hex(info->ll_int_field, 1);
}


void handle_no_len_mod(t_info *info, va_list va_arg_list, int spec)
{

    if (spec == 'd' || spec == 'c')
        info->ll_int_field = va_arg(va_arg_list, int);
    else if (spec == 'o')
        info->ll_int_field = ft_dec_to_oct(va_arg(va_arg_list, unsigned int));
    else if (spec == 'u' || spec == 'x' || spec == 'X')
        info->ll_int_field = va_arg(va_arg_list, unsigned int);

    if (spec == 'd' || spec == 'o' || spec == 'u')
        info->res = ft_itoa(info->ll_int_field);
    else if (spec == 'x')
        info->res = ft_dec_to_hex(info->ll_int_field, 0);
    else if (spec == 'X')
        info->res = ft_dec_to_hex(info->ll_int_field, 1);
    else if (spec == 's')
        info->res = ft_strcpy(info->res, va_arg(va_arg_list, char *));
}    


void handle_lenght_modifier(t_info *info, va_list va_arg_list, int spec)
{
    int i;

    i = 0;
    while (len_mod_table[i].fct)
    {
        if (info->len_mod == len_mod_table[i].mod)
        {
            len_mod_table[i].fct(info, va_arg_list, spec);
            break;
        }
        i++;
    }
}