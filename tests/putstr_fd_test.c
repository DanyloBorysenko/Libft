#include "libft.h"
#include <stdio.h>

int	main(void)
{
	// Test 1
	printf("Test 1\nfd = 1, c = 'Hello'. 'Hello' char must be printed\n");
	ft_putstr_fd("Hello", 1);

	// Test 2
	printf("\n\nTest 2\nfd = 2, c = 'Hello'. 'Hello' char must be printed\n");
	ft_putstr_fd("Hello", 2);

	// Test 3
	printf("\n\nTest 3\nfd = 2, c = NULL. function must do nothing, NO ERRORS\n");
	ft_putstr_fd(NULL, 2);
}