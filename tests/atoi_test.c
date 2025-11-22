#include <stdio.h>
#include <stdlib.h> // for atoi
#include "libft.h"

void setup(const char *description)
{
    static int test_nmb = 0;

    test_nmb++;
    printf("\nTest %d: %s\n", test_nmb, description);
}

void check(const char *input)
{
    int expected = atoi(input);
    int actual = ft_atoi(input);

    if (expected == actual)
        printf("OK\n");
    else
        printf("Input: \"%s\" → PROBLEM (expected %d, got %d)\n",
               input, expected, actual);
}

int main(void)
{
    setup("Normal case");
    check("1234");

    setup("nptr is 0");
    check("0");

    setup("nptr is negative");
    check("-1234");

    setup("nptr is positive");
    check("1000");

    setup("nptr is empty string");
    check("");

    setup("nptr is non-numeric");
    check("abc");

    setup("nptr is '--123'");
    check("--123");

    setup("nptr is '-+123'");
    check("-+123");

    setup("nptr is '+123'");
    check("+123");

    setup("nptr is '++123'");
    check("++123");

    setup("nptr contains 1 space");
    check(" 123");

    setup("nptr contains 2 spaces");
    check("  123");

    setup("nptr contains non-printable characters");
    check("\t123");

    setup("space after sign (undefined behavior)");
    check("- 123");   // This should be "-␣123"

    return (0);
}