#include "libft.h"
#include <stdio.h>
#include <string.h>

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
	setup(dest, "Copying src to the dest. Dest and src don't overlap");
	printf("Original dest : %s src : %s\n", dest, src);
	memmove(dest, src, 10);
	printf("standart memmove function: %s\n", dest);
	memset(dest, '*', 20);
	ft_memmove(dest, src, 10);
	printf("ft_memmove function: %s\n", dest);

	// Test 2
	setup(dest, "Returned value check after copying src to the dest");
	printf("Original dest : %s src : %s\n", dest, src);
	printf("Standart memmove returns : %s\n", (unsigned char *)memmove(dest, src, n));
	memset(dest, '*', 20);
	printf("ft_memmove returns : %s\n", (unsigned char *)ft_memmove(dest, src, n));

	// Test 3
	setup(dest, "Copying empty string");
	const char empt_str[] = "";
	printf("Original dest : %s, src : %s\n", dest, empt_str);
	printf("Standart memmove returns: %s\n", (unsigned char *)memmove(dest, empt_str, 1));
	memset(dest, '*', 20);
	printf("ft_memmove returns: %s\n", (unsigned char *)ft_memmove(dest, empt_str, 1));

	// Test 4
	setup(dest, "n equals to zero");
	printf("Original dest : %s, src : %s, n : %d\n", dest, src, 0);
	printf("Standart memmove returns: %s\n", (unsigned char *)memmove(dest, src, 0));
	memset(dest, '*', 20);
	printf("ft_memmove returns: %s\n", (unsigned char *)ft_memmove(dest, src, 0));

	// Test 5
	setup(dest, "n less then src length");
	printf("Original dest : %s, src : %s, n : %d\n", dest, src, 1);
	printf("Standart memmove returns: %s\n", (unsigned char *)memmove(dest, src, 1));
	memset(dest, '*', 20);
	printf("ft_memmove returns: %s\n", (unsigned char *)ft_memmove(dest, src, 1));

	// Test 6
	setup(dest, "Copying src to the dest. Dest and src overlap");
	printf("dest : %s, src : %s, n : %d\n", src + 2, src, 5);
	memmove(src + 2, src, 5);
	printf("standart memmove result is : %s\n", src);
	char src1[11] = "1234567890";
	ft_memmove(src1 + 2, src1, 5);
	printf("ft_memmove result is : %s\n", src1);
}