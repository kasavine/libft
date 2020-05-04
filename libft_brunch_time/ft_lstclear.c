#include "libft.h"

void	ft_lstclear(t_list **alst, void (*del)(void*, size_t))
{
	// t_list *curr;
	// t_list *next;

	// curr = *alst;
	// next = curr->next;
	// ft_lstdelone(&curr, del);
	// while(next != NULL)
	// {
	// 	curr = next;
	// 	next = curr->next;
	// 	ft_lstdelone(&curr, del);
	// }	

	t_list *curr;

	curr = *alst;
	while (curr != NULL)
	{
		del(curr->content, curr->content_size);
		free(curr);
		curr = curr->next;
	}
	*alst = NULL;
}