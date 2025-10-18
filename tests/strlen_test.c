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
	// Test 1
	setup("Correct result");
	char str[] = "Hello";
	printf("strlen func result : %zu\n", strlen(str));
	printf("ft_strlen func result : %zu\n", ft_strlen(str));

	// Test 2
	setup("argument is empty");
	char str1[] = "";
	printf("strlen func result : %zu\n", strlen(str1));
	printf("ft_strlen func result : %zu\n", ft_strlen(str1));

	// Test 3
	setup("special chars");
	char str2[] = "hello \t";
	printf("strlen func result : %zu\n", strlen(str2));
	printf("ft_strlen func result : %zu\n", ft_strlen(str2));
}