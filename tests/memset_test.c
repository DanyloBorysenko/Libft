#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{

	// Test 1
	printf("Test 1\n");

	char str[100] = "Hello world";
	int c = '*';
	size_t n = 5;

	printf("Original value : %s\n", str);
	memset(str, c, n);
	printf("Original memset function: %s\n", str);
	ft_memset(str, c, n);
	printf("ft_memset function: %s\n", str);

	// Test 2
	printf("Test 2\n");

	int integers[3] = {1,2,3};

	printf("Original memset function:\n");
	memset(integers, 0, 3 * sizeof(integers[0]));
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", integers[i]);
	}
	printf("\n");
	printf("ft_memset function:\n");
	ft_memset(integers, 0, 3 * sizeof(integers[0]));
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", integers[i]);
	}
	
	// Test 3
	printf("\nTest 3\n");
	char ptr[100] = "Hello world";
	printf("Original function returns : %s\n",(char *)memset(ptr, '*', 5 * sizeof(char)));
	printf("ft_memset function returns : %s\n",(char *)ft_memset(ptr, '*', 5 * sizeof(char)));
}
