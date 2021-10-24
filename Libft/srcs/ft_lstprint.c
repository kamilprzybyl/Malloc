#include "libft.h"

void ft_lstprint(t_list *node)
{
    t_list      *temp;

    temp = node;
    while (temp != NULL)
    {
        ft_putstr(temp->content);
        ft_putchar('\n');
        temp = temp->next;
    }
}