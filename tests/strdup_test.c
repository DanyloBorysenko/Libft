#include <stdio.h>
#include "libft.h"

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

int main(void)
{
	// Test 1
	setup("Correct result");
	char str[] = "Hello";
	char *expected = strdup(str);
	char *actual = ft_strdup(str);

	printf("strdup result : %s\n", expected);
	printf("ft_strdup result : %s\n", actual);
	free(expected);
	free(actual);

	// Test 2
	setup("empty string");
	char str1[] = "";
	char *expected1 = strdup(str1);
	char *actual1 = ft_strdup(str1);

	printf("strdup result : %s\n", expected1);
	printf("ft_strdup result : %s\n", actual1);
	free(expected1);
	free(actual1);

	// Test 3
	setup("check duplicate's pointer");
	char str2[] = "Hello";
	char *expected2 = strdup(str2);
	char *actual2 = ft_strdup(str2);

	printf("src : %p, strdup result : %p\n", str2, expected2);
	printf("src : %p, ft_strdup result : %p\n", str2, actual2);
	free(expected2);
	free(actual2);
}