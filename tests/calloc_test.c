#include <stdio.h>
#include "libft.h"
#include "limits.h"

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

void print_bytes(void *ptr, size_t count)
{
	unsigned char *p = (unsigned char *)ptr;
	size_t i = 0;
	while (i < count)
	{
		if (p[i] == '\0')
		{
			printf("\\0");
		} else {
			printf("%c", p[i]);
		}
		i++;
	}
	printf("\n");
}

int main(void)
{
	size_t nmemb = 5;
	size_t size = 1;

	// Test 1
	setup("Correct result");
	printf("calloc result :\n");
	print_bytes(calloc(nmemb, size), nmemb * size);
	printf("ft_calloc result :\n");
	print_bytes(ft_calloc(nmemb, size), nmemb * size);

	// Test 2
	setup("size = 2");
	size = 2;
	printf("calloc result :\n");
	print_bytes(calloc(nmemb, size), nmemb * size);
	printf("ft_calloc result :\n");
	print_bytes(ft_calloc(nmemb, size), nmemb * size);

	// Test 3
	setup("nmemb = SIZE_MAX");
	size_t max = __SIZE_MAX__;
	nmemb = 0;
	size = 5;
	printf("calloc result is NULL? : %d\n", calloc(max, size) == NULL);
	printf("ft_calloc result is NULL? : %d\n", ft_calloc(max, size) == NULL);
}