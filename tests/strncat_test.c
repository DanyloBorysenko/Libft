#include "libft.h"
#include <stdio.h>

void setup(char *info, char *dest)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
	bzero(dest, 15);
}

void print_dest(char *dest)
{
	for (size_t i = 0; i < 15; i++)
	{
		if (dest[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", dest[i]);
		}
	}
}

int main(void)
{
	char src[] = "Hello world";
	char dest[15];
	size_t ssize = 11;

	// Test 1
	setup("Dest is empty", dest);
	printf("dest : %s, src : %s\n", dest, src);
	printf("strncat returns : %s\n", strncat(dest, src, ssize));
	bzero(dest, 15);
	printf("ft_strncat returns : %s\n", ft_strncat(dest, src, ssize));


	// Test 2
	setup("Dest is not empty", dest);
	dest[0] = 'A';
	printf("dest : %s, src : %s, ssize : %zu\n", dest, src, ssize);
	printf("strncat returns : %s\n", strncat(dest, src, ssize));
	bzero(dest, 14);
	dest[0] = 'A';
	printf("ft_strncat returns : %s\n", ft_strncat(dest, src, ssize));
	bzero(dest, 14);

	// Test 3
	setup("src is empty", dest);
	char src_empt[] = "";
	printf("dest : %s, src : %s\n", dest, src_empt);
	printf("strncat returns : %s\n", strncat(dest, src_empt, ssize));
	bzero(dest, 14);
	printf("ft_strncat returns : %s\n", ft_strncat(dest, src_empt, ssize));

	// Test 4
	setup("check that last char is \\0", dest);
	printf("dest :\n");
	dest[11] = '*';
	print_dest(dest);
	printf("\nsrc : %s\n", src);
	strncat(dest, src, ssize);
	printf("\nstrncat returns : ");
	print_dest(dest);
	bzero(dest, 15);
	dest[11] = '*';
	ft_strncat(dest, src, ssize);
	printf("\nft_strncat returns : ");
	print_dest(dest);
	printf("\n");

	// Test 5
	setup("ssize is 0", dest);
	ssize = 0;
	printf("dest : %s, src : %s, ssize : %zu\n", dest, src, ssize);
	printf("strncat returns : %s\n", strncat(dest, src, ssize));
	bzero(dest, 15);
	printf("ft_strncat returns : %s\n", ft_strncat(dest, src, ssize));

	// Test 6
	setup("ssize is less than src", dest);
	ssize = 2;
	printf("dest : %s, src : %s, ssize : %zu\n", dest, src, ssize);
	printf("strncat returns : %s\n", strncat(dest, src, ssize));
	bzero(dest, 15);
	printf("ft_strncat returns : %s\n", ft_strncat(dest, src, ssize));

	// Test 7
	setup("ssize is bigger than src length", dest);
	ssize = 14;
	dest[11] = '*';
	printf("dest : ");
	print_dest(dest);
	printf("\nsrc : %s, ssize : %zu\n", src, ssize);
	printf("strncat returns : ");
	print_dest(strncat(dest, src, ssize));
	printf("\n");
	bzero(dest, 15);
	dest[11] = '*';
	printf("ft_strncat returns : ");
	print_dest(strncat(dest, src, ssize));
}
