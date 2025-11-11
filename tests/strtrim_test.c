#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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
	const char *set;

	// ----------------------------
	// Test 1: Normal case
	// ----------------------------
	s1 = "()He.. llo, world!";
	set = "., ()!";
	setup("Normal case");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "Helloworld";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 2: Trim only left
	// ----------------------------
	s1 = "   Hello";
	set = " ";
	setup("Trim only left");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "Hello";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 3: Trim only right
	// ----------------------------
	s1 = "Hello   ";
	set = " ";
	setup("Trim only right");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "Hello";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 4: Nothing to trim
	// ----------------------------
	s1 = "Hello";
	set = " ";
	setup("Nothing to trim");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "Hello";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 5: Everything trimmed
	// ----------------------------
	s1 = "xxxx";
	set = "x";
	setup("Everything trimmed");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 6: Empty string input
	// ----------------------------
	s1 = "";
	set = "x";
	setup("Empty string input");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 7: Empty set
	// ----------------------------
	s1 = "Hello";
	set = "";
	setup("Empty set (should not trim anything)");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "Hello";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	// ----------------------------
	// Test 8: NULL s1
	// ----------------------------
	s1 = NULL;
	set = " ";
	setup("NULL s1");
	actual = ft_strtrim(s1, set);
	expected = NULL;
	printf("s1 : %p, set : \"%s\"\n", (void *)s1, set);
	printf("expected : %p\nactual   : %p\n", (void *)expected, (void *)actual);
	// no free for NULL

	// ----------------------------
	// Test 9: NULL set
	// ----------------------------
	s1 = "Hello";
	set = NULL;
	setup("NULL set");
	actual = ft_strtrim(s1, set);
	expected = NULL;
	printf("s1 : \"%s\", set : %p\n", s1, (void *)set);
	printf("expected : %p\nactual   : %p\n", (void *)expected, (void *)actual);
	// no free for NULL

	// ----------------------------
	// Test 10: Trim internal characters
	// ----------------------------
	s1 = "a--b--c--a";
	set = "a";
	setup("Trim internal characters (should keep internal 'a's)");
	printf("s1 : \"%s\", set : \"%s\"\n", s1, set);
	expected = "--b--c--";
	actual = ft_strtrim(s1, set);
	printf("expected : \"%s\"\nactual   : \"%s\"\n", expected, actual);
	free(actual);

	return 0;
}