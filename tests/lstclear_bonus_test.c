#include "libft.h"
#include <stdio.h>

void del(void* content)
{
	printf("function del was used\n");
	printf("content '%s' was deleted\n", (char *)content);
	free(content);
}

void print_nodes(t_list **nodes)
{
	t_list *current = *nodes;
	while (current)
	{
		printf("\'%s\' ", (char *)current->content);
		current = current->next;
	}
	
	printf("\n");
}

int	main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	char *str1 = malloc(20);
	strcpy(str1, "content1");
	node1->content = str1;
	node1->next = NULL;

	t_list *node2 = malloc(sizeof(t_list));
	char *str2 = malloc(20);
	strcpy(str2, "content2");
	node2->content = str2;
	node2->next = NULL;

	node1->next = node2;

	// Test 1
	printf("Test 1 del function must be called two times\n");
	printf("Current list of nodes is : ");
	print_nodes(&node1);
	printf("\n");
	ft_lstclear_bonus(&node1, del);

	// Test 2
	printf("\nTest 2\nCheck that pointer to the list is NULL\n");
	printf("Pointer is NULL ? : %d\n", node1 == NULL);
}