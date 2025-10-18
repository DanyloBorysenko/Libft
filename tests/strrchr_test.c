#include "libft.h"
#include <stdio.h>

void setup(char *info)
{
	static int test_nmb;
	test_nmb++;
	printf("\nTest %d: %s\n", test_nmb, info);
}

int	main(void)
{
	char src[] = "Hello world";
	int c;

	// Test 1
	setup("character appears multiple times (check last occurrence)");
	c = 'o';
	printf("src : \"%s\", c : '%c'\n", src, c);
	printf("strrchr result : %s\n", strrchr(src, c));
	printf("ft_strrchr result : %s\n", ft_strrchr(src, c));

	// Test 2
	setup("character not in string");
	c = 'x';
	printf("src : \"%s\", c : '%c'\n", src, c);
	printf("strrchr returns NULL? : %d\n", strrchr(src, c) == NULL);
	printf("ft_strrchr returns NULL? : %d\n", ft_strrchr(src, c) == NULL);

	// Test 3
	setup("character is first in the string");
	c = 'H';
	printf("src : \"%s\", c : '%c'\n", src, c);
	printf("strrchr result : %s\n", strrchr(src, c));
	printf("ft_strrchr result : %s\n", ft_strrchr(src, c));

	// Test 4
	setup("character is the null terminator ('\\0')");
	c = '\0';
	printf("src : \"%s\", c : '\\0'\n", src);
	printf("strrchr result : %p\n", strrchr(src, c));
	printf("ft_strrchr result : %p\n", ft_strrchr(src, c));

	// Test 5
	setup("empty string, search for '\\0'");
	char empty[] = "";
	c = '\0';
	printf("src : \"%s\", c : '\\0'\n", empty);
	printf("strrchr result : %p\n", strrchr(empty, c));
	printf("ft_strrchr result : %p\n", ft_strrchr(empty, c));

	// Test 6
	setup("empty string, search for non-existing character");
	c = 'A';
	printf("src : \"%s\", c : '%c'\n", empty, c);
	printf("strrchr returns NULL? : %d\n", strrchr(empty, c) == NULL);
	printf("ft_strrchr returns NULL? : %d\n", ft_strrchr(empty, c) == NULL);

	return (0);
}