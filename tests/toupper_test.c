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
	setup("Lowercase letters 'a'-'z'");
	for (int c = 'a'; c <= 'z'; c++)
	{
		expected = toupper(c);
		actual = ft_toupper(c);
		printf("char: '%c'\ntoupper: '%c'\nft_toupper: '%c'\n", c, expected, actual);
		printf("\n");
	}

	// Test 2
	setup("Uppercase letters 'A'-'Z'");
	for (int c = 'A'; c <= 'Z'; c++)
	{
		expected = toupper(c);
		actual = ft_toupper(c);
		printf("char: '%c'\ntoupper: '%c'\nft_toupper: '%c'\n", c, expected, actual);
		printf("\n");
	}

	// Test 3
	setup("Digits and punctuation (non-letters)");
	for (int c = '0'; c <= '9'; c++)
	{
		expected = toupper(c);
		actual = ft_toupper(c);
		printf("char: '%c'\ntoupper: '%c'\nft_toupper: '%c'\n", c, expected, actual);
		printf("\n");
	}

	for (int c = 32; c < 48; c++) // symbols before '0'
	{
		expected = toupper(c);
		actual = ft_toupper(c);
		printf("char: '%c'\ntoupper: '%c'\nft_toupper: '%c'\n", c, expected, actual);
		printf("\n");
	}

	return (0);
}