#include "libft.h"
#include <stdio.h>

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

int	main(void)
{
	char src[] = "12345";
	char dest[15] = "***************";
	size_t size = 5;

	// Test 1
	setup("Correct result, copying the whole word");

	printf("dest : %s, str : %s, size : %zu\n", dest, src, size);
	printf("strncpy returns : %s\n", strncpy(dest, src, size));
	memset(dest, '*', 14);
	printf("ft_strncpy returns : %s\n", ft_strncpy(dest, src, size));
	memset(dest, '*', 14);

	// Test 2
	setup("Correct result, copying the part of word");
	size = 3;
	printf("dest : %s, str : %s, size : %zu\n", dest, src, size);
	printf("strncpy returns : %s\n", strncpy(dest, src, size));
	memset(dest, '*', 14);
	printf("ft_strncpy returns : %s\n", ft_strncpy(dest, src, size));
	memset(dest, '*', 14);

	// Test 3
	setup("n = 0");
	size = 0;
	printf("dest : %s, str : %s, size : %zu\n", dest, src, size);
	printf("strncpy returns : %s\n", strncpy(dest, src, size));
	memset(dest, '*', 14);
	printf("ft_strncpy returns : %s\n", ft_strncpy(dest, src, size));
	memset(dest, '*', 14);

	// Test 4
	setup("size is bigger than word length");
	size = 10;
	printf("dest : %s, str : %s, size : %zu\n", dest, src, size);
	printf("strncpy returns : %s\n", strncpy(dest, src, size));
	memset(dest, '*', 14);
	printf("ft_strncpy returns : %s\n", ft_strncpy(dest, src, size));
	memset(dest, '*', 14);

	// Test 5
	setup("single letter");
	size = 10;
	char sgl_let[] =  "A";
	printf("dest : %s, str : %s, size : %zu\n", dest, sgl_let, size);
	printf("strncpy returns : %s\n", strncpy(dest, sgl_let, size));
	memset(dest, '*', 14);
	printf("ft_strncpy returns : %s\n", ft_strncpy(dest, sgl_let, size));
	memset(dest, '*', 14);

	// Test 6
	setup("src is empty");
	size = 10;
	char empt[] =  "";
	printf("dest : %s, str : '%s', size : %zu\n", dest, empt, size);
	printf("strncpy returns : '%s'\n", strncpy(dest, empt, size));
	memset(dest, '*', 14);
	printf("ft_strncpy returns : '%s'\n", ft_strncpy(dest, empt, size));
	memset(dest, '*', 14);

	// Test 7
	setup("check null terminating characters when src is too short");
	size = 10;
	printf("dest : %s, str : '%s', size : %zu\n", dest, src, size);
	strncpy(dest, src, size);
	printf("strncpy returns\n");
	for (size_t i = 0; i < sizeof(dest); i++)
	{
		if (dest[i] == '\0')
		{
			printf("\\0 ");
		}
		else
		{
			printf("%c ", dest[i]);
		}
	}
	memset(dest, '*', 14);
	ft_strncpy(dest, src, size);
	printf("\nft_strncpy returns\n");
	for (size_t i = 0; i < sizeof(dest); i++)
	{
		if (dest[i] == '\0')
		{
			printf("\\0 ");
		}
		else
		{
			printf("%c ", dest[i]);
		}
	}
	printf("\n");
	memset(dest, '*', 14);
}