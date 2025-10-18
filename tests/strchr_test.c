#include "libft.h"
#include <stdio.h>


void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n%s\n", test_nmb, info);
}

int	main(void)
{
	char src[] = "Hello world";
	int c = 'o';

	// Test 1
	setup("src contains c (middle of the string)");
	printf("src : \"%s\", c : '%c'\n", src, c);
	printf("strchr returns : %s\n", strchr(src, c));
	printf("ft_strchr returns : %s\n", ft_strchr(src, c));

	// Test 2
	setup("src does not contain c");
	printf("src : \"%s\", c : '%c'\n", src, 'x');
	printf("strchr returns NULL? : %d\n", strchr(src, 'x') == NULL);
	printf("ft_strchr returns NULL? : %d\n", ft_strchr(src, 'x') == NULL);

	// Test 3
	setup("character is the first in the string");
	printf("src : \"%s\", c : '%c'\n", src, 'H');
	printf("strchr returns : %s\n", strchr(src, 'H'));
	printf("ft_strchr returns : %s\n", ft_strchr(src, 'H'));

	// Test 4
	setup("character is the null terminator");
	printf("src : \"%s\", c : '\\0'\n", src);
	printf("strchr returns : %p\n", strchr(src, '\0'));
	printf("ft_strchr returns : %p\n", ft_strchr(src, '\0'));

	// Test 5
	setup("empty string, c = '\\0'");
	char empty[] = "";
	printf("src : \"%s\", c : '\\0'\n", empty);
	printf("strchr returns : %p\n", strchr(empty, '\0'));
	printf("ft_strchr returns : %p\n", ft_strchr(empty, '\0'));

	// Test 6
	setup("empty string, c != '\\0'");
	printf("src : \"%s\", c : '%c'\n", empty, 'H');
	printf("strchr returns NULL? : %d\n", strchr(empty, 'H') == NULL);
	printf("ft_strchr returns NULL? : %d\n", ft_strchr(empty, 'H') == NULL);
}