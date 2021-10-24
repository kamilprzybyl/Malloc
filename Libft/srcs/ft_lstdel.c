#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list **temp;

    temp = alst;
    while (temp != NULL)
    {
        del((*temp)->content, sizeof(char));
            
        free(*temp);
        *temp = NULL;

        *temp = (*temp)->next;
    }
}