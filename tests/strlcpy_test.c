
#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <bsd/string.h>

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_size(size_t expected, size_t actual)
{
    if (expected == actual)
    {
        printf("OK\n");
        return 1;
    }
    printf("PROBLEM: expected %zu , actual %zu\n", expected, actual);
    return 0;
}

int check_dest(char *expected, char *actual)
{
    if (strcmp(expected, actual) == 0)
    {
        printf("OK\n");
        return 1;
    }
    printf("PROBLEM: expected \"%s\" , actual \"%s\"\n", expected, actual);
    return 0;
}

int main(void)
{
    char dst[20];
    char dst2[20];
    const char *src = "hello";
    size_t size;

    // Test 1: Normal copy
    setup("Normal copy result");
    bzero(dst, 20);
    bzero(dst2, 20);
    strlcpy(dst, src, 6);
    ft_strlcpy(dst2, src, 6);
    check_dest(dst, dst2);

    // Test 2: Check returned value
    setup("Returned value normal");
    bzero(dst, 20);
    bzero(dst2, 20);
    check_size(strlcpy(dst, src, 6), ft_strlcpy(dst2, src, 6));

    // Test 3: size < src length
    setup("Size less than src");
    bzero(dst, 20);
    bzero(dst2, 20);
    size = 2;
    check_size(strlcpy(dst, src, size), ft_strlcpy(dst2, src, size));
    check_dest(dst, dst2);

    // Test 4: size > src length
    setup("Size bigger than src");
    bzero(dst, 20);
    bzero(dst2, 20);
    size = 10;
    check_size(strlcpy(dst, src, size), ft_strlcpy(dst2, src, size));
    check_dest(dst, dst2);

    // Test 5: size = 0
    setup("Size = 0");
    bzero(dst, 20);
    bzero(dst2, 20);
    size = 0;
    check_size(strlcpy(dst, src, size), ft_strlcpy(dst2, src, size));
    check_dest(dst, dst2);

    // Test 6: src is empty
    setup("Source empty");
    bzero(dst, 20);
    bzero(dst2, 20);
    size = 6;
    const char *src1 = "";
    check_size(strlcpy(dst, src1, size), ft_strlcpy(dst2, src1, size));
    check_dest(dst, dst2);

    // Test 7: last character is \\0
    setup("Check last char is \\0");
    bzero(dst, 20);
    bzero(dst2, 20);
    dst[5] = '*';
    dst2[5] = '*';
    size = 6;
    strlcpy(dst, src, size);
    ft_strlcpy(dst2, src, size);
    check_dest(dst, dst2);
}
