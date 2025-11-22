#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void setup(const char *info)
{
	static int test_nmb = 0;
	test_nmb++;
	printf("\nTest %d\n%s\n", test_nmb, info);
}

int main(void)
{
	int c;
	int expected;
	int actual;

	// Test 1
	setup("Uppercase letters A-Z");
	for (c = 'A'; c <= 'Z'; c++)
	{
		expected = tolower(c);
		actual = ft_tolower(c);
		if (expected != actual)
		{
			printf("char '%c', tolower = %c, ft_tolower = %c\n", c, expected, actual);
		}
	}
	printf("Uppercase letters check completed\n");

	// Test 2
	setup("Lowercase letters a-z (should stay unchanged)");
	for (c = 'a'; c <= 'z'; c++)
	{
		expected = tolower(c);
		actual = ft_tolower(c);
		if (expected != actual)
		{
			printf("char '%c', tolower = %c, ft_tolower = %c\n", c, expected, actual);
		}
	}
	printf("Lowercase letters check completed\n");

	// Test 3
	setup("Digits 0-9 (should stay unchanged)");
	for (c = '0'; c <= '9'; c++)
	{
		expected = tolower(c);
		actual = ft_tolower(c);
		if (expected != actual)
		{
			printf("char '%c', tolower = %c, ft_tolower = %c\n", c, expected, actual);
		}
	}
	printf("Digits letters check completed\n");

	// Test 4
	setup("Non-printable characters 0-31 (should stay unchanged)");
	for (c = 0; c < 32; c++)
	{
		expected = tolower(c);
		actual = ft_tolower(c);
		if (expected != actual)
		{
			printf("char '%c', tolower = %c, ft_tolower = %c\n", c, expected, actual);
		}
	}
	printf("Non-printable characters check completed\n");

	// Test 5
	setup("Punctuation characters");
	const char punct[] = "!@#[]{};:'\",.<>/?\\|";
	for (int i = 0; punct[i] != '\0'; i++)
	{
		c = punct[i];
		expected = tolower(c);
		actual = ft_tolower(c);
		if (expected != actual)
		{
			printf("char '%c', tolower = %c, ft_tolower = %c\n", c, expected, actual);
		}
	}
	printf("Punctuation characters check completed\n");

	return (0);
}