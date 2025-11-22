#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void setup(const char *info)
{
    static int test_nmb;
    test_nmb++;

    printf("\nTest %d: %s\n", test_nmb, info);
}

void check(int nbr, const char *expected)
{
    char *actual = ft_itoa(nbr);

    if (!actual)
    {
        printf("PROBLEM: ft_itoa returned NULL\n");
        return;
    }

    if (strcmp(actual, expected) == 0)
        printf("OK\n");
    else
        printf("PROBLEM (expected \"%s\", got \"%s\")\n", expected, actual);

    free(actual);
}

int main(void)
{
    setup("number is 5");
    check(5, "5");

    setup("number is 0");
    check(0, "0");

    setup("number is -5");
    check(-5, "-5");

    setup("number is 12345");
    check(12345, "12345");

    setup("number is -12345");
    check(-12345, "-12345");

    setup("number is INT_MAX");
    check(INT_MAX, "2147483647");

    setup("number is INT_MIN");
    check(INT_MIN, "-2147483648");

    return 0;
}