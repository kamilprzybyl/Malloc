#ifndef _FT_PRINTF_H_
#define _FT_PRINTF_H_

#include "libft.h"
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct  s_info
{
    char            *res;
    long long       ll_int_field;

    int width;
    int precision;
    int width_val;
    int precision_val;
    int flags;
    int len_mod;
    int zero_flag_val;

}               t_info;

typedef struct  s_call_function
{
    void    (*fct)(t_info *info, va_list va_arg_list);
    char     spec;
}               t_call_fucntion;

typedef struct  s_len_modifiers
{
    void    (*fct)(t_info *info, va_list va_arg_list, int spec);
    int     mod;
}               t_len_modifiers;

#define NO_MOD  0 
#define MOD_H   1 
#define MOD_HH  2 
#define MOD_L   3 
#define MOD_LL  4 
#define MOD_J   5 
#define MOD_Z   6 

#define NO_FLAG     0 
#define POUND_SIGN  1 
#define MINUS_SIGN  2 
#define PLUS_SIGN   4 
#define ZERO_FLAG   8 

int ft_printf(const char *restrict format, ...);

void handle_width(t_info *info, char spec);
void handle_precision(t_info *info, char spec);
void handle_zero_flag(t_info *info, int spec);

void handle_h(t_info *info, va_list va_arg_list, int spec);
void handle_hh(t_info *info, va_list va_arg_list, int spec);
void handle_l(t_info *info, va_list va_arg_list, int spec);
void handle_ll(t_info *info, va_list va_arg_list, int spec);
void handle_j(t_info *info, va_list va_arg_list, int spec);
void handle_z(t_info *info, va_list va_arg_list, int spec);
void handle_no_len_mod(t_info *info, va_list va_arg_list, int spec);
void handle_lenght_modifier(t_info *info, va_list va_arg_list, int spec);

void handle_hex(t_info *info, va_list va_arg_list);
void handle_heX(t_info *info, va_list va_arg_list);
void handle_string(t_info *info, va_list va_arg_list);
void handle_pointer(t_info *info, va_list va_arg_list);
void handle_integer(t_info *info, va_list va_arg_list);
void handle_octal(t_info *info, va_list va_arg_list);
void handle_char(t_info *info, va_list va_arg_list);
void handle_u_char(t_info *info, va_list va_arg_list);

int check_flag(t_info *info, int flag);
void check_width(t_info *info, const char *format, int *i);
void check_prec(t_info *info, const char *format, int *i);
int check_len_mod(t_info *info, int spec);
int check_spec(t_info *info, va_list va_arg_list, char spec);

#endif