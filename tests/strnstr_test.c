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
	char haystack[30] = "Hello amazing world!";
	char *result;

	// Test 1: Normal case
	setup("Needle inside haystack within len");
	result = ft_strnstr(haystack, "am", 20);
	printf("Expected substring: 'amazing world!'\n");
	printf("Actual: %s\n", result);

	// Test 2: Needle not found
	setup("Needle not found");
	result = ft_strnstr(haystack, "hhh", 20);
	printf("Expected: (null)\n");
	printf("Actual: %s\n", result ? result : "(null)");

	// Test 3: Empty needle
	setup("Empty needle");
	result = ft_strnstr(haystack, "", 5);
	printf("Expected: '%s'\n", haystack);
	printf("Actual: '%s'\n", result);

	// Test 4: Needle would match but len too small
	setup("Needle crosses len boundary");
	result = ft_strnstr(haystack, "amazing", 5);
	printf("Expected: (null)\n");
	printf("Actual: %s\n", result ? result : "(null)");

	// Test 5: Empty haystack
	setup("Empty haystack");
	result = ft_strnstr("", "hello", 5);
	printf("Expected: (null)\n");
	printf("Actual: %s\n", result ? result : "(null)");

	// Test 6: Needle in the end
	setup("Needle in the end");
	result = ft_strnstr(haystack, "world", 19);
	printf("Expected: \"%s\"\n", "world!");
	printf("Actual: \"%s\"\n", result ? result : "(null)");

	return (0);
}