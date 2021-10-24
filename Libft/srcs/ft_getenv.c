#include "libft.h"

char *ft_getenv(const char *name)
{
    int     i;
    int     len;
    char    *env;

    i = 0;
    len = 0;

    while (environ[len])    // check enviromental elements quantity
        len++;

    while (i < len)
    {
        if (ft_strncmp(environ[i], name, ft_strlen(name)) == 0 && environ[i][(ft_strlen(name))] == '=')   // check if the env name is equal to the name passed as a argument
        {
            env = malloc(ft_strlen(&environ[i][(ft_strlen(name) + 1)]) * sizeof(char));
            ft_strcpy(env, &environ[i][(ft_strlen(name) + 1)]);    // copy everything before '=' character to 'env' variable
            return (env);
        }
        i++;
    }

    return (NULL);
}