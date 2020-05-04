
#include "libft.h"
#include <stdio.h>


static t_list	**add_front_back(int origin, t_list	**list)
{
	char* to_add;
	if (!list)
	{
		to_add = malloc(sizeof(char));
		*to_add = '0';
		ft_lstadd_front(list, ft_lstnew((void*)to_add));
	}
	if (origin < 0)
	{
		to_add = malloc(sizeof(char));
		*to_add = '-';
		ft_lstadd_front(list, ft_lstnew((void*)to_add));
	}
	to_add = malloc(sizeof(char));
	*to_add = '\0';
	ft_lstadd_back(list, ft_lstnew((void*)to_add));
	return list;
}

static	t_list	**convert_to_list(int origin, long n, t_list	**list)
{
	char* to_add = malloc(sizeof(char));
	if (n < 0)
		n = -n;
	if (n == 0) {
		return add_front_back(origin, list);
	}
	*to_add = (n % 10);
	t_list* new_el = ft_lstnew((void*)to_add);
	ft_lstadd_back(list, new_el);
	return convert_to_list(origin, n / 10, list);
}

char			*convert_to_str(t_list* list)
{
	int			index;
	char		*res;

	index = 0;
	res = malloc(sizeof(char) * ft_lstsize(list));
	while (list->next)
	{
		res[index] = *(char*)list->content;
		list = list->next;
		index++;
	}
	return (res);
}

char			*ft_itoa(int n)
{
	char		*res;
	t_list		**lst;

	lst = malloc(sizeof(t_list*));
	if (!lst)
		return (NULL);
	lst = convert_to_list(n, n, NULL);
	res = convert_to_str(*lst);
	return (res);
}
