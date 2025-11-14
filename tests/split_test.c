#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

void print_words(char **words)
{
	for (size_t i = 0; words[i]; i++)
	{
		printf("\"%s\" ",words[i]);
	}
	printf("\n");
}

int main(void)
{
	char c = ' ';

	// Test 1
	setup("Normal case");
	const char *str = " Hello world ";
	char *expected[] = {"Hello", "world", NULL};
	printf("expected : ");
	print_words(expected);
	printf("actual : ");
	print_words(ft_split(str, c));

	// Test 2
	setup("s is empty");
	const char *str1 = "";
	char *expected1[] = {NULL};
	printf("expected : ");
	print_words(expected1);
	printf("actual : ");
	print_words(ft_split(str1, c));

	// Test 3
	setup("s is NULL");
	const char *str2 = NULL;
	printf("ft_split returns NULL? : %d\n", ft_split(str2, c) == NULL);

	// Test 4
	setup("c is only in the left side");
	const char *str3 = " Hello";
	printf("expected : \"Hello\"\n");
	printf("actual : ");
	print_words(ft_split(str3, c));

	// Test 5
	setup("c is only in the right side");
	const char *str4 = "Hello ";
	printf("expected : \"Hello\"\n");
	printf("actual : ");
	print_words(ft_split(str4, c));

	// Test 6
	setup("s contains c only");
	const char *str5 = "       ";
	printf("expected : \n");
	printf("actual : ");
	print_words(ft_split(str5, c));

	// Test 7
	setup("s contains more than one c");
	const char *str6 = " Hello    world ";
	printf("s is \"%s\"\n", str6);
	printf("expected : \"Hello\" \"world\"\n");
	printf("actual : ");
	print_words(ft_split(str6, c));
}