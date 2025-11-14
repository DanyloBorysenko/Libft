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

char	toupper_char(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

int	main(void)
{
	const char *s = "Hello world";
	char *actual;

	// Test 1
	setup("s = NULL, ft_strmapi function must return NULL");
	actual = ft_strmapi(NULL, toupper_char);
	printf("ft_strmapi returns NULL? : %d\n", actual == NULL);
	free(actual);

	// Test 2
	setup("s = 'Hello world', *f is NULL. ft_strmapi function must return NULL");
	actual = ft_strmapi(s, NULL);
	printf("ft_strmapi returns NULL? : %d\n",  actual == NULL);
	free(actual);

	// Test 3
	setup("s = ''. ft_strmapi function must return ''");
	actual = ft_strmapi("", toupper_char);
	printf("ft_strmapi returns : \'%s\'\n", actual);
	free(actual);

	// Test 4
	setup("s = 'Hello world'");
	printf("expected : 'HeLlO WoRlD'\n");
	actual = ft_strmapi(s, toupper_char);
	printf("ft_strmapi returns : \'%s\'\n", actual);
	free(actual);

	// Test 5
	setup("s = 'a'. ft_strmapi function must return 'A'");
	actual = ft_strmapi("a", toupper_char);
	printf("ft_strmapi returns : \'%s\'\n", actual);
	free(actual);
}
