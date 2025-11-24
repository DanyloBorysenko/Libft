#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <bsd/string.h>

static int test_nmb = 0;

void setup(char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_size(size_t expected, size_t actual)
{
    if (expected == actual)
    { printf("OK\n"); return (1); }
    printf("PROBLEM: expected %zu , actual %zu\n", expected, actual);
    return (0);
}

int check_dest(char *expected, char *actual)
{
    if (strcmp(expected, actual) == 0)
    { printf("OK\n"); return (1); }
    printf("PROBLEM: expected \"%s\" , actual \"%s\"\n", expected, actual);
    return (0);
}

int main(void)
{
    char src[] = "Hello world";
    char dest[15];
    char dest2[15];

    // Test 1
    setup("concatenation result");
    bzero(dest, 15);
    bzero(dest2, 15);
    strlcat(dest, src, 15);
    ft_strlcat(dest2, src, 15);
    check_dest(dest, dest2);

    // Test 2
    setup("returned size");
    bzero(dest, 15);
    bzero(dest2, 15);
    check_size(strlcat(dest, src, 15), ft_strlcat(dest2, src, 15));

    // Test 3
    setup("dest begins with A");
    bzero(dest, 15);
    bzero(dest2, 15);
    dest[0] = 'A';
    dest2[0] = 'A';
    check_size(strlcat(dest, src, 15), ft_strlcat(dest2, src, 15));
    check_dest(dest, dest2);

    // Test 4
    setup("src empty");
    bzero(dest, 15);
    bzero(dest2, 15);
    dest[0] = 'A';
    dest2[0] = 'A';
    check_size(strlcat(dest, "", 15), ft_strlcat(dest2, "", 15));
    check_dest(dest, dest2);

    // Test 5
    setup("dsize = 1");
    bzero(dest, 15);
    bzero(dest2, 15);
    dest[0] = 'A';
    dest2[0] = 'A';
    check_size(strlcat(dest, src, 1), ft_strlcat(dest2, src, 1));
    check_dest(dest, dest2);

    // Test 6
    setup("dsize = 0");
    bzero(dest, 15);
    bzero(dest2, 15);
    check_size(strlcat(dest, src, 0), ft_strlcat(dest2, src, 0));
    check_dest(dest, dest2);

    // Test 7
    setup("dsize = 2");
    bzero(dest, 15);
    bzero(dest2, 15);
    dest[0] = 'A';
    dest2[0] = 'A';
    check_size(strlcat(dest, src, 2), ft_strlcat(dest2, src, 2));
    check_dest(dest, dest2);

    // Test 8
    setup("src = '*'");
    bzero(dest, 15);
    bzero(dest2, 15);
    check_size(strlcat(dest, "*", 15), ft_strlcat(dest2, "*", 15));
    check_dest(dest, dest2);

    // Test 9
    setup("no concatenation happens");
    char destA[100] = "**********";
    char destB[100] = "**********";
    check_size(strlcat(destA, src, 5), ft_strlcat(destB, src, 5));
    check_dest(destA, destB);

    // Test 10
    setup("last char is null");
    bzero(dest, 15);
    bzero(dest2, 15);
    dest[11] = '*';
    dest2[11] = '*';
    strlcat(dest, src, 15);
    ft_strlcat(dest2, src, 15);
    check_dest(dest, dest2);
}