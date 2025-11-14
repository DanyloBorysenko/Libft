#include "libft.h"
#include <stdio.h>

int main(void)
{
	// Test 1
	printf("Test 1\nfd = 1, c = 'A'. 'A' char must be printed\n");
	ft_putchar_fd('A', 1);

	// Test 2
	printf("\n\nTest 2\nfd = 2, c = 'A'. 'A' char must be printed\n");
	ft_putchar_fd('A', 2);
}