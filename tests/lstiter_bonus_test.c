#include "libft.h"
#include <stdio.h>

void f(void* content)
{
	printf("function f was used\n");
	printf("content '%s' was updated\n", (char *)content);
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
	// char *str1 = malloc(20);
	// strcpy(str1, "content1");
	node1->content = "content1";
	node1->next = NULL;

	t_list *node2 = malloc(sizeof(t_list));
	// char *str2 = malloc(20);
	// strcpy(str2, "content2");
	node2->content = "content2";
	node2->next = NULL;

	node1->next = node2;

	// Test 1
	printf("Test 1 (*f) function must be called two times\n");
	printf("Current list of nodes is : ");
	print_nodes(&node1);
	printf("\n");
	ft_lstiter_bonus(node1, f);
	print_nodes(&node1);
}