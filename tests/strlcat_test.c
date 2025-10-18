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
	size_t dsize = 15;

	// Test 1
	setup("check the correct concatenation", dest);
	strlcat(dest, src, dsize);
	printf("after strlcat: dest is %s\n", dest);
	bzero(dest, 15);
	ft_strlcat(dest, src, 15);
	printf("after ft_strlcat: dest is %s\n", dest);

	// Test 2
	setup("check the correct returned value", dest);
	printf("strlcat returns: %zu\n", strlcat(dest, src, dsize));
	bzero(dest, 15);
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest, src, dsize));

	// Test 3
	setup("dest is not empty", dest);
	dest[0] = 'A';
	printf("dest : %s, src : %s, dsize : %zu\n", dest, src, dsize);
	printf("strlcat returns: %zu\n", strlcat(dest, src, dsize));
	printf("after strlcat: dest is %s\n", dest);
	bzero(dest, 15);
	dest[0] = 'A';
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest, src, dsize));
	printf("after ft_strlcat: dest is %s\n", dest);

	// Test 4
	setup("src is empty", dest);
	dest[0] = 'A';
	char src_empt[] = "";
	printf("dest : %s, src : %s, dsize : %zu\n", dest, src_empt, dsize);
	printf("strlcat returns: %zu\n", strlcat(dest, src_empt, dsize));
	printf("after strlcat: dest is %s\n", dest);
	bzero(dest, 15);
	dest[0] = 'A';
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest, src_empt, dsize));
	printf("after ft_strlcat: dest is %s\n", dest);

	// Test 5
	setup("dsize = dest length", dest);
	dest[0] = 'A';
	dsize = 1;
	printf("dest : %s, src : %s, dsize : %zu\n", dest, src, dsize);
	printf("strlcat returns: %zu\n", strlcat(dest, src, dsize));
	printf("after strlcat: dest is %s\n", dest);
	bzero(dest, 15);
	dest[0] = 'A';
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest, src, dsize));
	printf("after ft_strlcat: dest is %s\n", dest);

	// Test 6
	setup("dsize = 0", dest);
	dest[0] = 'A';
	dsize = 0;
	printf("dest : %s, src : %s, dsize : %zu\n", dest, src, dsize);
	printf("strlcat returns: %zu\n", strlcat(dest, src, dsize));
	printf("after strlcat: dest is %s\n", dest);
	bzero(dest, 15);
	dest[0] = 'A';
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest, src, dsize));
	printf("after ft_strlcat: dest is %s\n", dest);

	// Test 7
	setup("dsize one more than dest length", dest);
	dest[0] = 'A';
	dsize = 2;
	printf("dest : %s, src : %s, dsize : %zu\n", dest, src, dsize);
	printf("strlcat returns: %zu\n", strlcat(dest, src, dsize));
	printf("after strlcat: dest is %s\n", dest);
	bzero(dest, 15);
	dest[0] = 'A';
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest, src, dsize));
	printf("after ft_strlcat: dest is %s\n", dest);

	// Test 8
	setup("src is one char", dest);
	char src2[] = "*";
	dsize = 2;
	printf("dest : %s, src : %s, dsize : %zu\n", dest, src2, dsize);
	printf("strlcat returns: %zu\n", strlcat(dest, src2, dsize));
	printf("after strlcat: dest is %s\n", dest);
	bzero(dest, 15);
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest, src2, dsize));
	printf("after ft_strlcat: dest is %s\n", dest);

	// Test 9
	setup("check that concatenation did not happen", dest);
	char dest1[100] = "**********";
	dsize = 5;
	printf("dest : %s, src : %s, dsize : %zu\n", dest1, src, dsize);
	printf("strlcat returns: %zu\n", strlcat(dest1, src, dsize));
	printf("after strlcat: dest is %s\n", dest1);
	memset(dest1, '*', 10);
	printf("ft_strlcat returns %zu\n", ft_strlcat(dest1, src, dsize));
	printf("after ft_strlcat: dest is %s\n", dest1);

	// Test 10
	setup("check that the last char is \\0", dest);
	printf("dest :\n");
	dsize = 15;
	dest[11] = '*';
	print_dest(dest);
	printf("\nsrc : %s\n", src);
	strlcat(dest, src, dsize);
	printf("\nafter strlcat: ");
	print_dest(dest);
	bzero(dest, dsize);
	dest[11] = '*';
	ft_strlcat(dest, src, dsize);
	printf("\nafter ft_strncat: ");
	print_dest(dest);
	printf("\n");
}