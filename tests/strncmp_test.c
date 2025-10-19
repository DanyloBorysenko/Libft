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
	setup("Same strings, full length");
	expected = strncmp(hello, hello, 5);
	actual = ft_strncmp(hello, hello, 5);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 2
	setup("Different only by one letter within n");
	expected = strncmp(hello, "Hellp", 5);
	actual = ft_strncmp(hello, "Hellp", 5);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 3
	setup("Difference is after n — should return 0");
	expected = strncmp("Hello", "Helxo", 3);
	actual = ft_strncmp("Hello", "Helxo", 3);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 4
	setup("First shorter string");
	expected = strncmp("Hel", hello, 5);
	actual = ft_strncmp("Hel", hello, 5);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 5
	setup("Second shorter string");
	expected = strncmp(hello, "Hel", 5);
	actual = ft_strncmp(hello, "Hel", 5);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 6
	setup("n = 0 — must always return 0");
	expected = strncmp("abc", "xyz", 0);
	actual = ft_strncmp("abc", "xyz", 0);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 7
	setup("Empty strings");
	expected = strncmp("", "", 5);
	actual = ft_strncmp("", "", 5);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 8
	setup("First empty, second non-empty");
	expected = strncmp("", "a", 5);
	actual = ft_strncmp("", "a", 5);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 9
	setup("Strings differ in ASCII value within n");
	expected = strncmp("abc", "abd", 3);
	actual = ft_strncmp("abc", "abd", 3);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	// Test 10
	setup("Strings differ after n");
	expected = strncmp("abcdef", "abcxyz", 3);
	actual = ft_strncmp("abcdef", "abcxyz", 3);
	printf("strncmp returns : %d\n", expected);
	printf("ft_strncmp returns : %d\n", actual);

	return (0);
}