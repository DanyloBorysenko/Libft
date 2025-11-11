#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{

	// Test 1
	printf("\nTest 1\n");

	char str[100] = "Hello world";
	char str2[100] = "Hello world";
	int c = '*';
	size_t n = 5;

	printf("Original value : %s\n", str);
	memset(str, c, n);
	printf("Original memset function: %s\n", str);
	ft_memset(str2, c, n);
	printf("ft_memset function: %s\n", str2);

	// Test 2
	printf("\nTest 2\n");

	int integers[3] = {1,2,3};
	int	integers2[3] = {1,2,3};

	printf("Original memset function:\n");
	memset(integers, 0, 3 * sizeof(integers[0]));
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", integers[i]);
	}
	printf("\n");
	printf("ft_memset function:\n");
	ft_memset(integers2, 0, 3 * sizeof(integers2[0]));
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", integers2[i]);
	}
	printf("\n");

	// Test 3
	printf("\nTest 3\n");
	char ptr[100] = "Hello world";
	char ptr1[100] = "Hello world";
	printf("memset takes pointer %p\n", ptr);
	printf("memset returns : %p\n",(char *)memset(ptr, '*', 5 * sizeof(char)));
	printf("ft_memset takes pointer %p\n", ptr1);
	printf("ft_memset function returns : %p\n",(char *)ft_memset(ptr1, '*', 5 * sizeof(char)));

	// Test 4
	printf("\nTest 4\n");
	size_t s = 0;
	char buf[10] = "abc";
	memset(buf, '*', s);
	printf("Original memset (n=0): %s\n", buf);
	ft_memset(buf, '*', s);
	printf("ft_memset (n=0): %s\n", buf);
}
