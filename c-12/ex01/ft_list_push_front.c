#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (new)
	{
		if (*begin_list)
			new->next = *begin_list;
		*begin_list = new;
	}
}
