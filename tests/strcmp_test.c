#include <stdio.h>
#include "libft.h"

void setup(const char *info)
{
	static int test_nmb;
	test_nmb++;
	printf("\nTest %d\n%s\n", test_nmb, info);
}

int main(void)
{
	int expected;
	int actual;

	char hello[] = "Hello";

	// Test 1
	setup("Same strings");
	expected = strcmp(hello, hello);
	actual = ft_strcmp(hello, hello);
	printf("strcmp returns : %d\n", expected);
	printf("ft_strcmp returns : %d\n", actual);

	// Test 2
	setup("Different only by one letter");
	expected = strcmp(hello, "Hellp");
	actual = ft_strcmp(hello, "Hellp");
	printf("strcmp returns : %d\n", expected);
	printf("ft_strcmp returns : %d\n", actual);

	// Test 3
	setup("First shorter");
	expected = strcmp("Hel", hello);
	actual = ft_strcmp("Hel", hello);
	printf("strcmp returns : %d\n", expected);
	printf("ft_strcmp returns : %d\n", actual);

	// Test 4
	setup("Second shorter");
	expected = strcmp(hello, "Hel");
	actual = ft_strcmp(hello, "Hel");
	printf("strcmp returns : %d\n", expected);
	printf("ft_strcmp returns : %d\n", actual);

	// Test 5
	setup("Empty strings");
	expected = strcmp("", "");
	actual = ft_strcmp("", "");
	printf("strcmp returns : %d\n", expected);
	printf("ft_strcmp returns : %d\n", actual);

	// Test 6
	setup("First empty, second non-empty");
	expected = strcmp("", "a");
	actual = ft_strcmp("", "a");
	printf("strcmp returns : %d\n", expected);
	printf("ft_strcmp returns : %d\n", actual);

	// Test 7
	setup("Strings differ in ASCII value");
	expected = strcmp("abc", "abd");
	actual = ft_strcmp("abc", "abd");
	printf("strcmp returns : %d\n", expected);
	printf("ft_strcmp returns : %d\n", actual);

	return (0);
}