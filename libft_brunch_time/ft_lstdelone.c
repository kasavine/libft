#include "libft.h"

void			ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
{
	t_list *item;

	item = *alst;
	if (item->content != NULL)
		(*del)(item->content, item->content_size);

	(*del)((void *)(*alst), sizeof(t_list));
	*alst = NULL;
}
