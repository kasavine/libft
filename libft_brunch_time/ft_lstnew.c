#include "libft.h"
#include <stdio.h>
t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*item;
	// if (content_size == 3) {
	// 	content_size = 18;
	// }
	item = (t_list *)malloc(sizeof(t_list));
	if (item == NULL)
		return (NULL);

	item->next = NULL;

	if (content != NULL)
	{
		item->content = malloc(sizeof(content_size));
		if (item->content == NULL)
		{
			ft_memdel((void **)item);
			return (NULL);
		}
		ft_memcpy(item->content, content, content_size);
		item->content_size = content_size;
	}
	else
	{
		item->content = NULL;
		item->content_size = 0;
	}
	return item;
}