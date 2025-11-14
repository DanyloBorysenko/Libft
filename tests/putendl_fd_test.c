#include "libft.h"
#include <stdio.h>

int main(void)
{
	// Test 1
	printf("Test 1\nfd = 1, c = 'Hello'\n");
	printf("'Hello' and new line must be printed\n");
	ft_putendl_fd("Hello", 1);
	

	// Test 2
	printf("\nTest 2\nfd = 2, c = 'Hello'\n");
	printf("'Hello' and new line must be printed\n");
	ft_putendl_fd("Hello", 1);

	// Test 3
	printf("\nTest 3\nfd = 2, c = NULL. function must do nothing, NO ERRORS\n");
	ft_putendl_fd(NULL, 1);
}