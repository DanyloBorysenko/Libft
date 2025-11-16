#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

void print_nodes_str(t_list **nodes)
{
	t_list *current = *nodes;
	while (current)
	{
		printf("\'%s\' ", (char *)current->content);
		current = current->next;
	}
	printf("\n");
}

void print_nodes_int(t_list **nodes)
{
	t_list *current = *nodes;
	while (current)
	{
		printf("\'%d\' ", *(int *)current->content);
		current = current->next;
	}
	printf("\n");
}

void *f(void *content)
{
	int	len = strlen((char *)content);
	int	*ptr = malloc(sizeof(int));
	*ptr = len;
	return (ptr);
}


void del(void* content)
{
	printf("function del was used\n");
	free(content);
}

int	main(void)
{
	t_list n1;
	n1.content = strdup("First");
	n1.next = NULL;

	t_list n2;
	n2.content = strdup("New");
	n2.next = NULL;

	n1.next = &n2;
	t_list *nodes = &n1;

	// Test 1
	setup("Test 1 Converting str to int");
	printf("Current nodes are : ");
	print_nodes_str(&nodes);
	printf("Returned list must contain '5' '3'\n");
	t_list *new_lst = ft_lstmap_bonus(&n1, f, del);
	printf("Returned list is : ");
	print_nodes_int(&new_lst);

	// Test 2
	setup("Chack that input and output are different lists");
	printf("two lists must have different pointers\n");
	printf("Input node address: %p\n", &n1);
	printf("Mapped node address: %p\n", new_lst);
}