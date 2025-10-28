#include <stdio.h>
#include <string.h>
#include "libft.h"

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
	char src[15] = "1234567890_";
	int c = '_';
	size_t n = 15;

	// Test 1
	setup(dest, "Copy up to the '_' character");
	printf("Original dest : %s, src : %s, c : %c\n", dest, src, c);
	memccpy(dest, src, c, n);
	printf("standart memccpy function: %s\n", dest);
	memset(dest, '*', 15);
	ft_memccpy(dest, src, c, n);
	printf("ft_memccpy function: %s\n", dest);

	// Test 2
	setup(dest, "Returned value check after copying src to the dest");
	printf("Original dest : %s\n", dest);
	printf("Standart memccpy returns : %s\n", (unsigned char *)memccpy(dest, src, c, n));
	memset(dest, '*', 15);
	printf("ft_memccpy returns : %s\n", (unsigned char *)ft_memccpy(dest, src, c, n));

	// Test 3
	setup(dest, "Returned value must be null");
	printf("Original dest : %s, src : %s , copy up to the 'a' character\n", dest, src);
	printf("Standart memccpy returns: %s\n", (unsigned char *)memccpy(dest, src, 'a', n));
	printf("dest : %s\n", dest);
	memset(dest, '*', 15);
	printf("ft_memccpy returns: %s\n", (unsigned char *)ft_memccpy(dest, src, 'a', n));
	printf("dest : %s\n", dest);

	// Test 4
	setup(dest, "Copying empty string");
	const char src1[] = "";
	printf("Original dest : %s, src : %s\n", dest, src1);
	printf("Standart memccpy returns: %s\n", (unsigned char *)memccpy(dest, src1, c, 1));
	memset(dest, '*', 15);
	printf("ft_memccpy returns: %s\n", (unsigned char *)ft_memccpy(dest, src1, c, 1));
}