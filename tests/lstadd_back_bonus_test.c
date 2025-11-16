#include "libft.h"
#include <stdio.h>

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
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

	t_list n1;
	n1.content = "First";
	n1.next = NULL;

	t_list n2;
	n2.content = "New";
	n2.next = NULL;

	t_list *nodes[2];
	nodes[0] = &n1;

	// Test 1
	setup("Normal case");
	printf("current list of nodes is : ");
	print_nodes(nodes);
	printf("\nAfter function call last node must be 'New'\n");
	ft_lstadd_back(nodes, &n2);
	printf("current list of nodes is : ");
	print_nodes(nodes);
}