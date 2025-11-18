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
	t_list *result;

	// Test 1
	setup("Normal case");
	printf("expected content: 'Hello'\n");
	result = ft_lstnew("Hello");
	printf("actual content: \'%s\'\n", (char *)result->content);
	printf("next node must be NULL\n");
	printf("next node is NULL ? : %d\n", result->next == NULL);

	// Test 2
	setup("Normal case, content is 15");
	int i = 15;
	printf("expected content: '15'\n");
	result = ft_lstnew(&i);
	printf("actual content: \'%d\'\n", *(int *)result->content);
	printf("next node must be NULL\n");
	printf("next node is NULL ? : %d\n", result->next == NULL);
}