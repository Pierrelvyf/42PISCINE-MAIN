#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;
	t_list	*last;

	ptr = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = ptr;
	else
	{
		last = ft_list_last(*begin_list);
		last->next = ptr;
	}
}
