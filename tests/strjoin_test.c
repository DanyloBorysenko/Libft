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

int main(void)
{
	char *actual;
	char *expected;
	const char *s1;
	const char *s2;

	// ----------------------------
	// Test 1: Normal case
	// ----------------------------
	setup("Normal case");
	s1 = "Hello, ";
	s2 = "World!";
	actual = ft_strjoin(s1, s2);
	expected = "Hello, World!";
	printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);
	printf("expected : %s\nactual   : %s\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 2: First string empty
	// ----------------------------
	setup("First string empty");
	s1 = "";
	s2 = "World";
	actual = ft_strjoin(s1, s2);
	expected = "World";
	printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);
	printf("expected : %s\nactual   : %s\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 3: Second string empty
	// ----------------------------
	setup("Second string empty");
	s1 = "Hello";
	s2 = "";
	actual = ft_strjoin(s1, s2);
	expected = "Hello";
	printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);
	printf("expected : %s\nactual   : %s\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 4: Both strings empty
	// ----------------------------
	setup("Both strings empty");
	s1 = "";
	s2 = "";
	actual = ft_strjoin(s1, s2);
	expected = "";
	printf("s1 = \"%s\", s2 = \"%s\"\n", s1, s2);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);
}