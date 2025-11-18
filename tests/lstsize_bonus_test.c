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

	t_list n2;
	n2.content = "New";
	n2.next = NULL;

	n1.next = &n2;

	// Test 1
	setup("Normal case");
	printf("current list's size is : 2\n");
	printf("Expected : 2\n");
	printf("Actual : %d\n", ft_lstsize(&n1));

	// Test 2
	setup("Size of list is 0");
	printf("Expected : 0\n");
	printf("Actual : %d\n", ft_lstsize(NULL));
}