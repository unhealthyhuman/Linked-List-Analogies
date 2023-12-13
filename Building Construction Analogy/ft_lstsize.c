#include <stddef.h>

typedef struct s_list {
	void	*content;
	struct s_list	*next;
}	t_list;

int ft_lstsize(t_list *lst)
{
		int	i;
		t_list	*tmp;

		i = 0;
		tmp = malloc(sizeof(t_list));
		tmp = lst;
		while (tmp)
		{
				tmp = tmp->next;
			   i++;	
		}
		return (i);
}
