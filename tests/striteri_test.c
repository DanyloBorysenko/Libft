#include "libft.h"
#include <stdio.h>

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

void	toupper_char(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

int	main(void)
{
	char s[] = "Hello world";

	// Test 1
	setup("s = NULL");
	printf("ft_striteri function must do nothing, NO ERRORS\n");
	ft_striteri(NULL, toupper_char);

	// Test 2
	setup("s = 'Hello world', *f is NULL");
	printf("ft_striteri function must do nothing, NO ERRORS\n");
	ft_striteri(s, NULL);

	// Test 3
	char s1[] = "";
	setup("s = ''. ft_striteri function must do nothing");
	ft_striteri(s1, toupper_char);
	printf("after ft_striteri s = \'%s\'\n", s1);

	// Test 4
	char s3[] = "Hello world";
	setup("s = 'Hello world'");
	printf("expected : 'HeLlO WoRlD'\n");
	ft_striteri(s3, toupper_char);
	printf("actual : \'%s\'\n", s3);

	// Test 5
	setup("s = 'a'");
	char s2[] = "a";
	ft_striteri(s2, toupper_char);
	printf("expected : 'A'");
	printf("actual : \'%s\'\n", s2);
}