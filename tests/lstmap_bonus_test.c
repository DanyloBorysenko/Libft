#include "libft.h"
#include <stdio.h>
#include <string.h>

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
	printf("content '%s' was deleted\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list n1;
	n1.content = "First";
	n1.next = NULL;

	t_list n2;
	n2.content = "New";
	n2.next = NULL;

	n1.next = &n2;
	t_list *nodes[2];
	nodes[0] = &n1;
	nodes[1] = &n2;

	// Test 1
	setup("Test 1 Normal case");
	print_nodes(nodes);
	t_list *new_lst = ft_lstmap_bonus(&n1, f, del);
	print_nodes(&new_lst);
}