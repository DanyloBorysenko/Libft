#include <stdio.h>
#include "libft.h"
#include <string.h>

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

	// Test 1
	setup("Dest is empty", dest);
	printf("dest : %s, str : %s\n", dest, src);
	printf("strcat returns : %s\n", strcat(dest, src));
	bzero(dest, 14);
	printf("ft_strcat returns : %s\n", ft_strcat(dest, src));


	// Test 2
	setup("Dest is not empty", dest);
	dest[0] = 'A';
	printf("dest : %s, str : %s\n", dest, src);
	printf("strcat returns : %s\n", strcat(dest, src));
	bzero(dest, 14);
	dest[0] = 'A';
	printf("ft_strcat returns : %s\n", ft_strcat(dest, src));
	bzero(dest, 14);

	// Test 3
	setup("src is empty", dest);
	char src_empt[] = "";
	printf("dest : %s, str : %s\n", dest, src_empt);
	printf("strcat returns : %s\n", strcat(dest, src_empt));
	bzero(dest, 14);
	printf("ft_strcat returns : %s\n", ft_strcat(dest, src_empt));

	// Test 4
	setup("check that last char is \\0", dest);
	printf("dest :\n");
	dest[11] = '*';
	print_dest(dest);
	printf("\nsrc : %s\n", src);
	strcat(dest, src);
	printf("\nstrcat returns : ");
	print_dest(dest);
	bzero(dest, 15);
	dest[11] = '*';
	ft_strcat(dest, src);
	printf("\nft_strcat returns : ");
	print_dest(dest);
	printf("\n");
}
