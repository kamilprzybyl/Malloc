#include "libft.h"

t_list *ft_lstrev(t_list *lst)
{
    t_list      *prev;
    t_list      *temp;
    t_list      *next;

    if (!lst)
        return (NULL);

    prev = NULL;
    temp = lst;
    while (temp)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return (prev);
}