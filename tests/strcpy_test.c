#include <stdio.h>
#include "libft.h"
void print_dest(char *dest)
{
	size_t i;

	i = 0;
	while (i < 15)
	{
		if(dest[i] == '\0')
			printf("\\0");
		else
		{
			printf("%c", dest[i]);
		}
		i++;
	}
	printf("\n");
}

void setup(char *info)
{
	static int test_nmb;

	test_nmb++;
	printf("\nTest %d\n", test_nmb);
	printf("%s\n", info);
}

int main(void)
{
	char src[] = "Hello world";
	char dest[15] = "***************";

	// Test 1
	setup("Correct result");

	printf("dest : %s, str : %s\n", dest, src);
	printf("strcpy returns : %s\n", strcpy(dest, src));
	memset(dest, '*', 14);
	printf("ft_strcpy returns : %s\n", ft_strcpy(dest, src));
	memset(dest, '*', 14);

	// Test 2
	setup("one letter string");
	char src_let[] = "A";
	printf("dest : %s, str : %s\n", dest, src_let);
	printf("strcpy returns : %s\n", strcpy(dest, src_let));
	memset(dest, '*', 14);
	printf("ft_strcpy returns : %s\n", ft_strcpy(dest, src_let));
	memset(dest, '*', 14);

	// Test 3
	setup("src is empty");
	char src_empt[] = "";
	printf("dest : %s, str : %s\n", dest, src_empt);
	printf("strcpy returns : %s\n", strcpy(dest, src_empt));
	memset(dest, '*', 14);
	printf("ft_strcpy returns : %s\n", ft_strcpy(dest, src_empt));
	memset(dest, '*', 14);

	// Test 4
	setup("check that last char is \\0");
	bzero(dest, 15);
	dest[11] = '*';
	printf("dest :\n");
	print_dest(dest);
	printf("\nsrc : %s\n", src);
	strcpy(dest, src);
	printf("\nafter strcpy: ");
	print_dest(dest);
	bzero(dest, 15);
	dest[11] = '*';
	ft_strcpy(dest, src);
	printf("\nafter ft_strcpy : ");
	print_dest(dest);
	printf("\n");
}
