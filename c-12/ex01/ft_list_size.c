#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int	i;

	i = 0;
	ptr = begin_list;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
