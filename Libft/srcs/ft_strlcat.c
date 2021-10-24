#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	int 	dst_len;
	int 	x;
	int 	i;

	dst_len = ft_strlen(dst);
	x = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	
	while (src[x] != '\0' && x < (int)(size - dst_len - 1))
		dst[i++] = src[x++];

	dst[i] = '\0';

	return (dst_len + ft_strlen(src));
}