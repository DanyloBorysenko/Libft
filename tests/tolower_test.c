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
		printf("char '%c'\ntolower = %c\nft_tolower = %c\n", c, expected, actual);
		printf("\n");
	}

	// Test 2
	setup("Lowercase letters a-z (should stay unchanged)");
	for (c = 'a'; c <= 'z'; c++)
	{
		expected = tolower(c);
		actual = ft_tolower(c);
		printf("char '%c'\nolower = %c\nft_tolower = %c\n", c, expected, actual);
		printf("\n");
	}

	// Test 3
	setup("Digits 0-9 (should stay unchanged)");
	for (c = '0'; c <= '9'; c++)
	{
		expected = tolower(c);
		actual = ft_tolower(c);
		printf("char '%c'\ntolower = %c\nft_tolower = %c\n", c, expected, actual);
		printf("\n");
	}

	// Test 4
	setup("Non-printable characters 0-31 (should stay unchanged)");
	for (c = 0; c < 32; c++)
	{
		expected = tolower(c);
		actual = ft_tolower(c);
		printf("char %d:\ntolower = %d\nft_tolower = %d\n", c, expected, actual);
		printf("\n");
	}

	// Test 5
	setup("Punctuation characters");
	const char punct[] = "!@#[]{};:'\",.<>/?\\|";
	for (int i = 0; punct[i] != '\0'; i++)
	{
		c = punct[i];
		expected = tolower(c);
		actual = ft_tolower(c);
		printf("char '%c'\ntolower = %c\nft_tolower = %c\n", c, expected, actual);
		printf("\n");
	}

	return (0);
}