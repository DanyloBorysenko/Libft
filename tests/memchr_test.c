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
	int c = ' ';
	int n = sizeof(src);

	// Test 1
	setup("src contains c");
	printf("src : %s, c : '%c'\n", src, c);
	printf("memchr returns : %s\n", (unsigned char *)memchr(src, c, n));
	printf("ft_memchr returns : %s\n", (unsigned char *)ft_memchr(src, c, n));

	// Test 2
	setup("src does not contains c");
	printf("src : %s, c : '.'\n", src);
	printf("memchr returns NULL? : %d\n", memchr(src, '.', n) == NULL);
	printf("ft_memchr returns NULL? : %d\n", ft_memchr(src, '.', n) == NULL);

	// Test 3
	setup("n equals to zero");
	printf("src : %s, c : '%c', n = %d\n", src, c, 0);
	printf("memchr returns NULL? : %d\n", memchr(src, c, 0) == NULL);
	printf("ft_memchr returns NULL? : %d\n", ft_memchr(src, c, 0) == NULL);

	// Test 4
	setup("src is empty");
	char src1[] = "";
	printf("src : '%s', c : '%c', n = %d\n", src1, c, 1);
	printf("memchr returns NULL? : %d\n", memchr(src1, c, 1) == NULL);
	printf("ft_memchr returns NULL? : %d\n", ft_memchr(src1, c, 1) == NULL);

	// Test 5
	setup("character is the last");
	char src2[] = "Hello";
	printf("src : '%s', c : '%c', n = %d\n", src2, 'o', 6);
	printf("memchr returns : %s\n", (unsigned char *)memchr(src2, 'o', 6));
	printf("ft_memchr returns : %s\n", (unsigned char *)ft_memchr(src2, 'o', 6));
}