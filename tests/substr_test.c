#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_str(const char *expected, const char *actual)
{
    if ((expected == NULL && actual == NULL) ||
        (expected && actual && strcmp(expected, actual) == 0))
    {
        printf("OK\n");
        return 1;
    }
    printf("PROBLEM: expected '%s', actual '%s'\n",
           expected ? expected : "(null)",
           actual ? actual : "(null)");
    return 0;
}

int main(void)
{
    char *actual;
    const char *expected;
    const char *s = "Hello";
    unsigned int start;
    size_t len;

    // Test 1: Normal case
    setup("Normal case");
    start = 2;
    len = 3;
    actual = ft_substr(s, start, len);
    expected = "llo";
    check_str(expected, actual);
    free(actual);

    // Test 2: Start beyond string length
    setup("Start beyond string length");
    start = 10;
    len = 3;
    actual = ft_substr(s, start, len);
    expected = "";
    check_str(expected, actual);
    free(actual);

    // Test 3: Length exceeds remaining string
    setup("Length exceeds remaining string");
    start = 3;
    len = 10;
    actual = ft_substr(s, start, len);
    expected = "lo";
    check_str(expected, actual);
    free(actual);

    // Test 4: Copy full string
    setup("Copy full string");
    start = 0;
    len = 5;
    actual = ft_substr(s, start, len);
    expected = "Hello";
    check_str(expected, actual);
    free(actual);

    // Test 5: Empty string input
    setup("Empty string input");
    s = "";
    start = 0;
    len = 3;
    actual = ft_substr(s, start, len);
    expected = "";
    check_str(expected, actual);
    free(actual);

    // Test 6: Length 0
    setup("Length 0");
    s = "Hello";
    start = 2;
    len = 0;
    actual = ft_substr(s, start, len);
    expected = "";
    check_str(expected, actual);
    free(actual);

    return 0;
}