  #include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list      *temp;
    t_list      *new;
    t_list      *prev;
    int         i;

    if (!(new = malloc(sizeof(t_list))))
        return (NULL);

    prev = NULL;
    temp = lst;
    i = 0;
    while (temp != NULL)
    {
        if (i == 0)
            new = f(temp);
        else
            ft_lstadd_front(&new, f(temp));
        
        temp = temp->next;
        i++;
    } 
    return (ft_lstrev(new));
}