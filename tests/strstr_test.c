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
	char haystack[] = "Hello world";
	char needle[] = "Hello";

	// Test 1
	setup("valid substring from zero index");
	printf("haystack : \"%s\", needle \"%s\"\n", haystack, needle);
	printf("strstr returns : %s\n", strstr(haystack, needle));
	printf("ft_strstr returns : %s\n", ft_strstr(haystack, needle));

	// Test 2
	setup("valid substring in the end of haystack");
	char needle1[] = "world";
	printf("haystack : \"%s\", needle \"%s\"\n", haystack, needle1);
	printf("strstr returns : %s\n", strstr(haystack, needle1));
	printf("ft_strstr returns : %s\n", ft_strstr(haystack, needle1));

	// Test 3
	setup("substring is one letter");
	char needle2[] = " ";
	printf("haystack : \"%s\", needle \"%s\"\n", haystack, needle2);
	printf("strstr returns : %s\n", strstr(haystack, needle2));
	printf("ft_strstr returns : %s\n", ft_strstr(haystack, needle2));

	// Test 4
	setup("needle is empty");
	char needle3[] = "";
	printf("haystack : \"%s\", needle \"%s\"\n", haystack, needle3);
	printf("strstr returns : %s\n", strstr(haystack, needle3));
	printf("ft_strstr returns : %s\n", ft_strstr(haystack, needle3));

	// Test 5
	setup("haystack is empty");
	char haystack1[] = "";
	printf("haystack : \"%s\", needle \"%s\"\n", haystack1, needle);
	printf("strstr returns NULL ? : %d\n", strstr(haystack1, needle) == NULL);
	printf("ft_strstr returns NULL ? : %d\n", ft_strstr(haystack1, needle) == NULL);

	// Test 6
	setup("invalid substring");
	char needle4[] = "A";
	printf("haystack : \"%s\", needle \"%s\"\n", haystack, needle4);
	printf("strstr returns NULL ? : %d\n", strstr(haystack, needle4) == NULL);
	printf("ft_strstr returns NULL ? : %d\n", ft_strstr(haystack, needle4) == NULL);
}