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
	setup("Printable ASCII range (32 - 126)");
	for (int c = 32; c <= 126; c++)
	{
		expected = isprint(c);
		actual = ft_isprint(c);
		if (expected != actual)
			printf("Mismatch for '%c' (%d): isprint = %d, ft_isprint = %d\n", c, c, expected, actual);
	}
	printf("Printable range check completed.\n");

	// Test 2
	setup("Non-printable characters (0 - 31)");
	for (int c = 0; c < 32; c++)
	{
		expected = isprint(c);
		actual = ft_isprint(c);
		if (expected != actual)
			printf("Mismatch for %d: isprint = %d, ft_isprint = %d\n", c, expected, actual);
	}
	printf("Control characters check completed.\n");

	// Test 3
	setup("DEL character (127)");
	expected = isprint(127);
	actual = ft_isprint(127);
	printf("isprint = %d, ft_isprint = %d\n", expected, actual);

	// Test 4
	setup("Negative and >127 values");
	int test_values[] = {-10, -1, 128, 255, 300};
	for (int i = 0; i < 5; i++)
	{
		int c = test_values[i];
		expected = isprint(c);
		actual = ft_isprint(c);
		printf("char %d -> isprint = %d, ft_isprint = %d\n", c, expected, actual);
	}

	return (0);
}