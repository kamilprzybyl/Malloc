
#include "get_next_line.h"

static int my_memccpy(char *dst, const char *src, int c)
{
    int     i;

    i = 0;
    while (src[i] != '\0')
    {
        if (src[i] == c)
        {
            dst[i+1] = '\0';
            return (i);
        }
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    
    return (i);
}

int get_next_line(const int fd, char **line)
{
    static char *buff;
    char        *temp;
    int         len;
    int         ret;

    if (!fd || !line)
        return (-1);
    if (!buff)
        buff = ft_memalloc(sizeof(char) * BUFF_SIZE);
    temp = ft_memalloc(sizeof(char) * BUFF_SIZE);
    len = 0;
    ft_memset(*line, '\0', ft_strlen(*line));
    if (ft_strlen(buff) == 0)
    {
        while (!strchr(temp, '\n') && ft_memset(temp, '\0', ft_strlen(temp)) && (ret = read(fd, temp, BUFF_SIZE)))
            len = my_memccpy(*line + ft_strlen(*line), temp, '\n');
        if (ret == 0 && ft_strlen(buff) == 0)       
            return (0);
        my_memccpy(buff, temp + len, '\0');
    }
    else if (ft_strchr(buff + 1, '\n'))
    {
        my_memccpy(*line, buff + 1, '\n');
        my_memccpy(buff, ft_strchr(buff + 1, '\n'), '\0');
    }
    else
    {
        my_memccpy(*line, buff + 1, '\0');
        ft_bzero(buff, ft_strlen(buff));
        while (!strchr(temp, '\n') && ft_memset(temp, '\0', ft_strlen(temp)) && (ret = read(fd, temp, BUFF_SIZE)))
            len = my_memccpy(*line + ft_strlen(*line), temp, '\n');
        my_memccpy(buff, temp + len, '\0');
    }                                                                   
    return (1);
}