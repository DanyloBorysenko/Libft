#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test 1
	printf("Test 1\n");
	char word[100] = "abc";
	printf("Original value: %s\n", word);

	bzero(word + 1, 2 * sizeof(word[0]));
	printf("Original bzero function: %s\n", word);

	ft_bzero(word + 1, 2 * sizeof(word[0]));
	printf("Ft_bzero function: %s\n", word);

	// Test 2
	printf("\nTest 2\n");
	int numbers[3] = {1,2,3};
	printf("Original value:");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	bzero(numbers + 1, 2 * sizeof(numbers[0]));
	printf("Original bzero:");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	ft_bzero(numbers + 1, 2 * sizeof(numbers[0]));
	printf("ft_bzero:");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
}