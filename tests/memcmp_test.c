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
	// Test 1
	setup("Two equal str by first char");
	printf("memcmp returns : %d\n", memcmp("abc", "abc", 1));
	printf("ft_memcmp returns : %d\n", ft_memcmp("abc", "abc", 1));

	// Test 2
	setup("Two equal str by last char");
	printf("memcmp returns : %d\n", memcmp("abc", "abc", 3));
	printf("ft_memcmp returns : %d\n", ft_memcmp("abc", "abc", 3));

	// Test 3
	setup("Two equal str with digits");
	printf("memcmp returns : %d\n", memcmp("123", "123", 3));
	printf("ft_memcmp returns : %d\n", ft_memcmp("abc", "abc", 3));

	// Test 4
	setup("first str less than second");
	printf("memcmp returns : %d\n", memcmp("abc", "cba", 3));
	printf("ft_memcmp returns : %d\n", ft_memcmp("abc", "cba", 3));

	// Test 5
	setup("first str greater than second");
	printf("memcmp returns : %d\n", memcmp("cba", "abc", 3));
	printf("ft_memcmp returns : %d\n", ft_memcmp("cba", "abc", 3));

	// Test 6
	setup("different words by last char");
	printf("memcmp returns : %d\n", memcmp("abc", "abd", 3));
	printf("ft_memcmp returns : %d\n", ft_memcmp("abc", "abd", 3));

	// Test 7
	setup("first str is empty");
	printf("memcmp returns : %d\n", memcmp("", "abd", 1));
	printf("ft_memcmp returns : %d\n", ft_memcmp("", "abd", 1));

	// Test 8
	setup("second str is empty");
	printf("memcmp returns : %d\n", memcmp("abc", "", 1));
	printf("ft_memcmp returns : %d\n", ft_memcmp("abc", "", 1));

	// Test 9
	setup("two words are empty");
	printf("memcmp returns : %d\n", memcmp("", "", 1));
	printf("ft_memcmp returns : %d\n", ft_memcmp("", "", 1));

	// Test 10
	setup("n = 0");
	printf("memcmp returns : %d\n", memcmp("abc", "ABC", 0));
	printf("ft_memcmp returns : %d\n", ft_memcmp("abc", "ABC", 0));
}