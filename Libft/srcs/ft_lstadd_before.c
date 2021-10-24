#include "libft.h"

void ft_lstadd_before(t_list **alst, t_list *new, t_list *nxt)
{
    if (!alst || !new || !nxt)
        return;

    t_list      *temp;

    temp = *alst;
    while (temp->next != nxt)
        temp = temp->next;
    
    if (temp)
    {
        new->next = nxt;
        temp->next = new;
    }
    else
        return;
}