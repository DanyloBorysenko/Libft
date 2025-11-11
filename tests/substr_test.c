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
	char *actual;
	char *expected;
	const char s[] = "Hello";
	unsigned int start = 2;
	size_t len = 3;

	// Test 1
	setup("Normal case");
	printf("s = %s, start = %u, len = %zu\n", s, start, len);
	expected = "llo";
	actual = ft_substr(s, start, len);
	printf("expected : %s\nactual : %s\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 2: Start beyond string length
	// ----------------------------
	start = 10;
	len = 3;
	setup("Start beyond string length");
	actual = ft_substr(s, start, len);
	expected = "";
	printf("s = %s, start = %u, len = %zu\n", s, start, len);
	printf("expected : '%s'\nactual   : '%s'\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 3: Length exceeds remaining string
	// ----------------------------
	start = 3;
	len = 10;
	setup("Length exceeds remaining string");
	actual = ft_substr(s, start, len);
	expected = "lo";
	printf("s = %s, start = %u, len = %zu\n", s, start, len);
	printf("expected : %s\nactual   : %s\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 4: Start at 0, len full string
	// ----------------------------
	start = 0;
	len = 5;
	setup("Copy full string");
	actual = ft_substr(s, start, len);
	expected = "Hello";
	printf("s = %s, start = %u, len = %zu\n", s, start, len);
	printf("expected : %s\nactual   : %s\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 5: Empty string input
	// ----------------------------
	const char *s1 = "";
	start = 0;
	len = 3;
	setup("Empty string input");
	actual = ft_substr(s1, start, len);
	expected = "";
	printf("s = '%s', start = %u, len = %zu\n", s1, start, len);
	printf("expected : '%s'\nactual   : '%s'\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 6: Length 0
	// ----------------------------
	const char *s3 = "Hello";
	start = 2;
	len = 0;
	setup("Length 0");
	actual = ft_substr(s3, start, len);
	expected = "";
	printf("s = %s, start = %u, len = %zu\n", s3, start, len);
	printf("expected : '%s'\nactual   : '%s'\n", expected, actual);
	free(actual);
}