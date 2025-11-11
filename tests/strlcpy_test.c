
#include <strings.h>
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

void setup(const char *info)
{
    static int test_nmb;
    test_nmb++;
    printf("\nTest %d\n%s\n", test_nmb, info);
}

void print_dest(char *dest)
{
	for (size_t i = 0; i < 20; i++)
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
	char dst[20];
	const char *src = "hello";
	size_t size = 6;

	// Test 1
	setup("Normal case");
	bzero(dst, 20);
	strlcpy(dst, src, size);
	printf("after strlcpy dst is: %s\n", dst);
	bzero(dst, 20);
	ft_strlcpy(dst, src, size);
	printf("after ft_strlcpy dst is: %s\n", dst);
	bzero(dst, 20);

	// Test 2
	setup("Normal case, check returned value");
	bzero(dst, 20);
	printf("strlcpy returns: %zu\n", strlcpy(dst, src, size));
	bzero(dst, 20);
	printf("ft_strlcpy returns: %zu\n", ft_strlcpy(dst, src, size));

	// Test 3
	setup("size is less than src");
	size = 2;
	bzero(dst, 20);
	printf("dest: %s, src: %s, size :%zu\n", dst, src, size);
	printf("strlcpy returns: %zu\n", strlcpy(dst, src, size));
	printf("after strlcpy dst is: %s\n", dst);
	bzero(dst, 20);
	printf("ft_strlcpy returns: %zu\n", ft_strlcpy(dst, src, size));
	printf("after ft_strlcpy dst is: %s\n", dst);

	// Test 4
	setup("size is too big");
	size = 10;
	bzero(dst, 20);
	printf("dest: %s, src: %s, size :%zu\n", dst, src, size);
	printf("strlcpy returns: %zu\n", strlcpy(dst, src, size));
	printf("after strlcpy dst is: %s\n", dst);
	bzero(dst, 20);
	printf("ft_strlcpy returns: %zu\n", ft_strlcpy(dst, src, size));
	printf("after ft_strlcpy dst is: %s\n", dst);

	// Test 5
	setup("size = 0");
	size = 0;
	bzero(dst, 20);
	printf("dest: %s, src: %s, size :%zu\n", dst, src, size);
	printf("strlcpy returns: %zu\n", strlcpy(dst, src, size));
	printf("after strlcpy dst is: %s\n", dst);
	bzero(dst, 20);
	printf("ft_strlcpy returns: %zu\n", ft_strlcpy(dst, src, size));
	printf("after ft_strlcpy dst is: %s\n", dst);

	// Test 6
	setup("src is ''");
	size = 6;
	const char *src1 = "";
	bzero(dst, 20);
	printf("dest: %s, src: %s, size :%zu\n", dst, src1, size);
	printf("strlcpy returns: %zu\n", strlcpy(dst, src1, size));
	printf("after strlcpy dst is: %s\n", dst);
	bzero(dst, 20);
	printf("ft_strlcpy returns: %zu\n", ft_strlcpy(dst, src1, size));
	printf("after ft_strlcpy dst is: %s\n", dst);

	// Test 7
	setup("Check that last char is \\0");
	bzero(dst, 20);
	dst[5] = '*';
	printf("dest is: \n");
	print_dest(dst);
	printf("\n");
	printf("strlcpy returns: %zu\n", strlcpy(dst, src, size));
	printf("after strlcpy dst is:\n");
	print_dest(dst);
	printf("\n");
	bzero(dst, 20);
	dst[5] = '*';
	printf("ft_strlcpy returns: %zu\n", ft_strlcpy(dst, src, size));
	printf("after ft_strlcpy dst is:\n");
	print_dest(dst);
	printf("\n");
}
