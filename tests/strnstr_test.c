#include <stdio.h>
#include <string.h>
#include "libft.h"

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

int check_strnstr(const char *expected, const char *actual)
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
    printf("PROBLEM: expected '%s' , actual '%s'\n",
           expected ? expected : "(null)",
           actual ? actual : "(null)");
    return 0;
}

int main(void)
{
    char haystack[30] = "Hello amazing world!";
    char *result;

    // Test 1: Needle inside haystack within len
    setup("Needle inside haystack within len");
    result = ft_strnstr(haystack, "am", 20);
    check_strnstr("amazing world!", result);

    // Test 2: Needle not found
    setup("Needle not found");
    result = ft_strnstr(haystack, "hhh", 20);
    check_strnstr(NULL, result);

    // Test 3: Empty needle
    setup("Empty needle");
    result = ft_strnstr(haystack, "", 5);
    check_strnstr(haystack, result);

    // Test 4: Needle crosses len boundary
    setup("Needle crosses len boundary");
    result = ft_strnstr(haystack, "amazing", 5);
    check_strnstr(NULL, result);

    // Test 5: Empty haystack
    setup("Empty haystack");
    result = ft_strnstr("", "hello", 5);
    check_strnstr(NULL, result);

    // Test 6: Needle at the end
    setup("Needle in the end");
    result = ft_strnstr(haystack, "world", 19);
    check_strnstr("world!", result);

    return 0;
}