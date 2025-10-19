#include <stdio.h>
#include <ctype.h>
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

	// Test 1
	setup("Lower bound (0)");
	expected = isascii(0);
	actual = ft_isascii(0);
	printf("isascii returns : %d\n", expected);
	printf("ft_isascii returns : %d\n", actual);

	// Test 2
	setup("Upper bound (127)");
	expected = isascii(127);
	actual = ft_isascii(127);
	printf("isascii returns : %d\n", expected);
	printf("ft_isascii returns : %d\n", actual);

	// Test 3
	setup("Middle of ASCII range ('A')");
	expected = isascii('A');
	actual = ft_isascii('A');
	printf("isascii returns : %d\n", expected);
	printf("ft_isascii returns : %d\n", actual);

	// Test 4
	setup("Non-ASCII positive value (128)");
	expected = isascii(128);
	actual = ft_isascii(128);
	printf("isascii returns : %d\n", expected);
	printf("ft_isascii returns : %d\n", actual);

	// Test 5
	setup("Negative value (-1)");
	expected = isascii(-1);
	actual = ft_isascii(-1);
	printf("isascii returns : %d\n", expected);
	printf("ft_isascii returns : %d\n", actual);

	// Test 6
	setup("Random value in range (64)");
	expected = isascii(64);
	actual = ft_isascii(64);
	printf("isascii returns : %d\n", expected);
	printf("ft_isascii returns : %d\n", actual);

	return (0);
}