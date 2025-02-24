#include "ft_list.h"
#include <stdlib.h>

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

#include <stdio.h>

int	main(void)
{
	t_list	*List;

	List = ft_create_elem("salut");

	printf("VALUE: %s\n", List->data);	
	
	return (0);
}
