#include "libft.h"
#include <stdio.h>
#include <string.h>

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_strrchr(const char *expected, const char *actual)
{
    if (expected == NULL && actual == NULL)
    {
        printf("OK\n");
        return 1;
    }
    if (expected && actual && strcmp(expected, actual) == 0)
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
    char src[] = "Hello world";
    int c;
    char empty[] = "";

    // Test 1: character appears multiple times (check last occurrence)
    setup("character appears multiple times");
    c = 'o';
    check_strrchr(strrchr(src, c), ft_strrchr(src, c));

    // Test 2: character not in string
    setup("character not in string");
    c = 'x';
    check_strrchr(strrchr(src, c), ft_strrchr(src, c));

    // Test 3: character is first in the string
    setup("character is first in string");
    c = 'H';
    check_strrchr(strrchr(src, c), ft_strrchr(src, c));

    // Test 4: character is the null terminator ('\0')
    setup("character is null terminator");
    c = '\0';
    check_strrchr(strrchr(src, c), ft_strrchr(src, c));

    // Test 5: empty string, search for '\0'
    setup("empty string, search for '\\0'");
    c = '\0';
    check_strrchr(strrchr(empty, c), ft_strrchr(empty, c));

    // Test 6: empty string, search for non-existing character
    setup("empty string, search for non-existing character");
    c = 'A';
    check_strrchr(strrchr(empty, c), ft_strrchr(empty, c));

    return 0;
}