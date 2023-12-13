#include <stddef.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list  *l_element;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			l_element = ft_lstlast(*lst);
			l_element->next = new;
		}
        else
		*lst = new;
	}
}
