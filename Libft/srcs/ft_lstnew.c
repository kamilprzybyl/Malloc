#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list      *link;
    
    if (!(link = malloc(sizeof(t_list))))
        return (NULL);

    link->next = NULL; 

    if (!content)
    {
        link->content = NULL;
        link->content_size = 0;
        return (link);
    }
        
    link->content = ft_strdup(content);
    link->content_size = content_size;
    
    return (link);
}