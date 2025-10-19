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
	int	expected;
	int	actual;

	// Test 1
	setup("Normal case");
	expected = atoi("1234");
	actual = ft_atoi("1234");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 2
	setup("nptr is 0");
	expected = atoi("0");
	actual = ft_atoi("0");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 3
	setup("nptr is negative '-1234'");
	expected = atoi("-1234");
	actual = ft_atoi("-1234");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 4
	setup("nptr is 1000");
	expected = atoi("1000");
	actual = ft_atoi("1000");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 5
	setup("nptr is empty");
	expected = atoi("");
	actual = ft_atoi("");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 6
	setup("nptr is 'abc'");
	expected = atoi("abc");
	actual = ft_atoi("abc");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 7
	setup("nptr is '--123");
	expected = atoi("--123");
	actual = ft_atoi("--123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 8
	setup("nptr is '-+123");
	expected = atoi("-+123");
	actual = ft_atoi("-+123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 9
	setup("nptr is '+123");
	expected = atoi("+123");
	actual = ft_atoi("+123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 10
	setup("nptr is '++123");
	expected = atoi("++123");
	actual = ft_atoi("++123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 11
	setup("nptr contains space ' 123'");
	expected = atoi(" 123");
	actual = ft_atoi(" 123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 12
	setup("nptr contains two spaces '  123'");
	expected = atoi("  123");
	actual = ft_atoi("  123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 13
	setup("nptr contains non printable chars");
	expected = atoi("\t123");
	actual = ft_atoi("\t123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	// Test 14
	setup("space after sign");
	expected = atoi("- 123");
	actual = ft_atoi("- t123");
	printf("atoi returns : %d\nft_atoi returns : %d\n", expected, actual);

	return (0);
}