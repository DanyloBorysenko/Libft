#include "libft.h"
#include <stdio.h>
#include <string.h>

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_strlen(size_t expected, size_t actual)
{
    if (expected == actual)
    {
        printf("OK\n");
        return 1;
    }
    printf("PROBLEM: expected %zu , actual %zu\n", expected, actual);
    return 0;
}

int main(void)
{
    // Test 1: Normal string
    setup("Normal string");
    char str[] = "Hello";
    check_strlen(strlen(str), ft_strlen(str));

    // Test 2: Empty string
    setup("Empty string");
    char str1[] = "";
    check_strlen(strlen(str1), ft_strlen(str1));

    // Test 3: String with special characters
    setup("String with special characters");
    char str2[] = "hello \t";
    check_strlen(strlen(str2), ft_strlen(str2));
}