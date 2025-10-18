#include <string.h>
#include "libft.h"
#include <stdio.h>

void	setup(char *dest, char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
	memset(dest, '*', 20);
}

int	main(void)
{
	char dest[100];
	char src[11] = "1234567890";
	size_t n = 10;

	// Test 1
	setup(dest, "Copying src to the dest");
	printf("Original dest : %s src : %s\n", dest, src);
	memcpy(dest, src, n);
	printf("standart memcpy function: %s\n", dest);
	memset(dest, '*', 15);
	ft_memcpy(dest, src, n);
	printf("ft_memccpy function: %s\n", dest);

	// Test 2
	setup(dest, "Returned value check after copying src to the dest");
	printf("Original dest : %s src : %s\n", dest, src);
	printf("Standart memccpy returns : %s\n", (unsigned char *)memcpy(dest, src, n));
	memset(dest, '*', 15);
	printf("ft_memccpy returns : %s\n", (unsigned char *)ft_memcpy(dest, src, n));

	// // Test 3
	setup(dest, "Copying empty string");
	const char empt_str[] = "";
	printf("Original dest : %s, src : %s\n", dest, empt_str);
	printf("Standart memcpy returns: %s\n", (unsigned char *)memcpy(dest, empt_str, 1));
	memset(dest, '*', 15);
	printf("ft_memcpy returns: %s\n", (unsigned char *)ft_memcpy(dest, empt_str, 1));

	// Test 4
	setup(dest, "n equals to zero");
	printf("Original dest : %s, src : %s, n : %d\n", dest, src, 0);
	printf("Standart memcpy returns: %s\n", (unsigned char *)memcpy(dest, src, 0));
	memset(dest, '*', 15);
	printf("ft_memcpy returns: %s\n", (unsigned char *)ft_memcpy(dest, src, 0));

	// Test 5
	setup(dest, "n less then src length");
	printf("Original dest : %s, src : %s, n : %d\n", dest, src, 1);
	printf("Standart memcpy returns: %s\n", (unsigned char *)memcpy(dest, src, 1));
	memset(dest, '*', 15);
	printf("ft_memcpy returns: %s\n", (unsigned char *)ft_memcpy(dest, src, 1));
}