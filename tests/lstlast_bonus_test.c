#include "libft.h"
#include <stdio.h>

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

int	main(void)
{

	t_list n1;
	n1.content = "First";
	n1.next = NULL;

	t_list *actual;

	// Test 1
	setup("size is 1");
	printf("Expected : 'First'\n");
	actual = ft_lstlast(&n1);
	printf("Actual : '%s'\n", (char *)actual->content);

	// Test 2
	setup("size is 2");
	t_list n2;
	n2.content = "Second";
	n2.next = NULL;
	n1.next = &n2;
	printf("Expected : 'Second'\n");
	actual = ft_lstlast(&n1);
	printf("Actual : '%s'\n", (char *)actual->content);
}