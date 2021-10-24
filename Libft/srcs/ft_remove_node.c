#include "libft.h"

int ft_remove_node(t_list **alst, t_list *node)
{
    t_list      *temp;
    t_list      *prev;

    temp = *alst;
    if (!temp || !node)
        return (EXIT_FAILURE);

    if (temp == node)
    {
        *alst = temp->next;
        free(temp);
        return (EXIT_SUCCESS);
    }

    while (temp && temp != node)
    {
        prev = temp;
        temp = temp->next;
    }
    if (!temp)
        return (EXIT_FAILURE);

    prev->next = temp->next;
    free(temp);
    return (EXIT_SUCCESS);
}