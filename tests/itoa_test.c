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

int	main(void)
{
	int nbr;

	// Test 1
	setup("number is 5");
	nbr = 5;
	printf("Expected value is 5\n");
	printf("Actual value is %s\n", ft_itoa(nbr));

	// Test 2
	setup("number is 0");
	nbr = 0;
	printf("Expected value is 0\n");
	printf("Actual value is %s\n", ft_itoa(nbr));

	// Test 3
	setup("number is -5");
	nbr = -5;
	printf("Expected value is -5\n");
	printf("Actual value is %s\n", ft_itoa(nbr));

	// Test 4
	setup("number is 12345");
	nbr = 12345;
	printf("Expected value is 12345\n");
	printf("Actual value is %s\n", ft_itoa(nbr));

	// Test 5
	setup("number is -12345");
	nbr = -12345;
	printf("Expected value is -12345\n");
	printf("Actual value is %s\n", ft_itoa(nbr));

	// Test 6
	setup("number is INT_MAX (2147483647)");
	nbr = 2147483647;
	printf("Expected value is 2147483647\n");
	printf("Actual value is %s\n", ft_itoa(nbr));

	// Test 7
	setup("number is INT_MIN (-2147483648)");
	nbr = -2147483648;
	printf("Expected value is -2147483648\n");
	printf("Actual value is %s\n", ft_itoa(nbr));
}