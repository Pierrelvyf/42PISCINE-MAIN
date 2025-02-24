#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*item;
	
	item = malloc(sizeof(t_list));
	if (item == NULL)
		return (NULL);
	item->data = data;
	item->next = NULL;
	return (item);
}
