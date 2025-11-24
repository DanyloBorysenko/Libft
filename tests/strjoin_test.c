#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_strjoin(const char *expected, const char *actual)
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
    const char *s1;
    const char *s2;

    // Test 1: Normal case
    setup("Normal case");
    s1 = "Hello, ";
    s2 = "World!";
    actual = ft_strjoin(s1, s2);
    expected = "Hello, World!";
    check_strjoin(expected, actual);
    free(actual);

    // Test 2: First string empty
    setup("First string empty");
    s1 = "";
    s2 = "World";
    actual = ft_strjoin(s1, s2);
    expected = "World";
    check_strjoin(expected, actual);
    free(actual);

    // Test 3: Second string empty
    setup("Second string empty");
    s1 = "Hello";
    s2 = "";
    actual = ft_strjoin(s1, s2);
    expected = "Hello";
    check_strjoin(expected, actual);
    free(actual);

    // Test 4: Both strings empty
    setup("Both strings empty");
    s1 = "";
    s2 = "";
    actual = ft_strjoin(s1, s2);
    expected = "";
    check_strjoin(expected, actual);
    free(actual);

    return 0;
}