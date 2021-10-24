#include "libft.h"

void ft_lstadd_after(t_list **alst, t_list *new, t_list *prev)
{
    if (!alst || !new || !prev)
        return;

    t_list      *temp;

    temp = *alst;
    while (temp != prev)
        temp = temp->next;

    if (temp)
    {
        new->next = prev->next;
        temp->next = new;
    }
    else
        return;
}