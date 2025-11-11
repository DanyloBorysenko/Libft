#include "libft.h"
#include <stdio.h>
#include <string.h>

void print_bytes(void *ptr, size_t n)
{
    unsigned char *p = ptr;
    for (size_t i = 0; i < n; i++)
    {
        if (p[i] == 0)
            printf("\\0 ");
        else
            printf("%c ", p[i]);
    }
    printf("\n");
}

int	main(void)
{
	// Test 1
	printf("Test 1\n");
	char word[100] = "abc";
	printf("Original value: %s\n", word);

	bzero(word + 1, 2 * sizeof(word[0]));
	printf("Original bzero function:\n");
	print_bytes(word, 3);

	char word2[100] = "abc";
	ft_bzero(word2 + 1, 2 * sizeof(word2[0]));
	printf("ft_bzero function:\n");
	print_bytes(word2, 3);

	// Test 2
	printf("\nTest 2\n");
	int numbers[3] = {1,2,3};
	int numbers1[3] = {1,2,3};
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
	ft_bzero(numbers1 + 1, 2 * sizeof(numbers1[0]));
	printf("ft_bzero:");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", numbers1[i]);
	}
	printf("\n");

	// Test 3
	printf("\nTest 3\n");
	char buf[] = "abc";
	char buf1[] = "abc";
	size_t z = 0;
	printf("original value is %s\n", buf);
	printf("after bzero value is\n");
	bzero(buf, z);
	print_bytes(buf, 3);
	printf("after ft_bzero value is\n");
	ft_bzero(buf1, z);
	print_bytes(buf1, 3);
}