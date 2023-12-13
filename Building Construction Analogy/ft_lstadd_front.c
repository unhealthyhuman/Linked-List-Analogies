typedef struct s_list {
	void	*content;
	struct s_list	*next;
}	t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
#include<stdio.h>

int main()
{
	int a;
	int *pa;
	int **ppa; 

	a = 6;
	pa = &a;
	ppa=&pa;
	printf("I am variable a, my value is %d, and my adress is %p\n", a, &a);
	printf("I am pointer to a (int *pa) *pa = % d, i am pointing to (pa =) %p, my adress is (&pa) = %p\n", *pa, pa, &pa);
	printf("I am pointer to pointer to a (int **ppa),  **ppa = %d, i am pointing to (*ppa) = %p, ppa =%p, &ppa = %p", **ppa, *ppa, ppa, &ppa);

	

}