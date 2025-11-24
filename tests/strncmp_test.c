#include "libft.h"
#include <stdio.h>
#include <string.h>

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_strncmp(int expected, int actual)
{
    if ((expected == 0 && actual == 0) || (expected < 0 && actual < 0) || (expected > 0 && actual > 0))
    {
        printf("OK\n");
        return 1;
    }
    printf("PROBLEM: expected %d , actual %d\n", expected, actual);
    return 0;
}

int main(void)
{
    int expected;
    int actual;
    char hello[] = "Hello";

    // Test 1
    setup("Same strings, full length");
    expected = strncmp(hello, hello, 5);
    actual = ft_strncmp(hello, hello, 5);
    check_strncmp(expected, actual);

    // Test 2
    setup("Different only by one letter within n");
    expected = strncmp(hello, "Hellp", 5);
    actual = ft_strncmp(hello, "Hellp", 5);
    check_strncmp(expected, actual);

    // Test 3
    setup("Difference is after n — should return 0");
    expected = strncmp("Hello", "Helxo", 3);
    actual = ft_strncmp("Hello", "Helxo", 3);
    check_strncmp(expected, actual);

    // Test 4
    setup("First shorter string");
    expected = strncmp("Hel", hello, 5);
    actual = ft_strncmp("Hel", hello, 5);
    check_strncmp(expected, actual);

    // Test 5
    setup("Second shorter string");
    expected = strncmp(hello, "Hel", 5);
    actual = ft_strncmp(hello, "Hel", 5);
    check_strncmp(expected, actual);

    // Test 6
    setup("n = 0 — must always return 0");
    expected = strncmp("abc", "xyz", 0);
    actual = ft_strncmp("abc", "xyz", 0);
    check_strncmp(expected, actual);

    // Test 7
    setup("Empty strings");
    expected = strncmp("", "", 5);
    actual = ft_strncmp("", "", 5);
    check_strncmp(expected, actual);

    // Test 8
    setup("First empty, second non-empty");
    expected = strncmp("", "a", 5);
    actual = ft_strncmp("", "a", 5);
    check_strncmp(expected, actual);

    // Test 9
    setup("Strings differ in ASCII value within n");
    expected = strncmp("abc", "abd", 3);
    actual = ft_strncmp("abc", "abd", 3);
    check_strncmp(expected, actual);

    // Test 10
    setup("Strings differ after n");
    expected = strncmp("abcdef", "abcxyz", 3);
    actual = ft_strncmp("abcdef", "abcxyz", 3);
    check_strncmp(expected, actual);

    return 0;
}