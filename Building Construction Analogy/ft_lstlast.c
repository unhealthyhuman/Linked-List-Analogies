#include <stddef.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

t_list *ft_lstlast(t_list *lst)
{
		t_list	*tmp;

		tmp = lst

		if (!(tmp))
				return (NULL);
		while (tmp->next)
			tmp = tmp->next;
		return (tmp);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!(lst))
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
