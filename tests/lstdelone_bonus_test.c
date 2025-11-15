#include "libft.h"
#include <stdio.h>

void del(void* content)
{
	free(content);
	printf("function del was used - OK\n");
}

int	main(void)
{
	t_list *node = malloc(sizeof(t_list));
	char *str = malloc(20);
	strcpy(str, "content");
	node->content = str;
	node->next = NULL;

	// Test 1
	printf("Check that del function was used\n");
	ft_lstdelone_bonus(node, del);	
}