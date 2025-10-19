#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void setup(const char *info)
{
    static int test_nmb;
    test_nmb++;
    printf("\nTest %d\n%s\n", test_nmb, info);
}

int main(void)
{
    int expected;
    int actual;

    // Test 1: Digits 0-9
    setup("Digits 0-9");
    for (char c = '0'; c <= '9'; c++)
    {
        expected = isdigit(c);
        actual   = ft_isdigit(c);
        printf("char '%c': isdigit = %d, ft_isdigit = %d\n", c, expected, actual);
    }

    // Test 2: Uppercase letters
    setup("Uppercase letters A-Z");
    for (char c = 'A'; c <= 'Z'; c++)
    {
        expected = isdigit(c);
        actual   = ft_isdigit(c);
        printf("char '%c': isdigit = %d, ft_isdigit = %d\n", c, expected, actual);
    }

    // Test 3: Lowercase letters
    setup("Lowercase letters a-z");
    for (char c = 'a'; c <= 'z'; c++)
    {
        expected = isdigit(c);
        actual   = ft_isdigit(c);
        printf("char '%c': isdigit = %d, ft_isdigit = %d\n", c, expected, actual);
    }

    // Test 4: Punctuation
    setup("Punctuation characters");
    char punct[] = "!@#$%^&*()_+-=[]{}|;:',.<>/?`~\"\\";
    for (int i = 0; punct[i]; i++)
    {
        expected = isdigit(punct[i]);
        actual   = ft_isdigit(punct[i]);
        printf("char '%c': isdigit = %d, ft_isdigit = %d\n", punct[i], expected, actual);
    }

    // Test 5: Non-printable characters
    setup("Non-printable ASCII 0-31");
    for (int c = 0; c <= 31; c++)
    {
        expected = isdigit(c);
        actual   = ft_isdigit(c);
        printf("ASCII %d: isdigit = %d, ft_isdigit = %d\n", c, expected, actual);
    }

    // Test 6: DEL character
    setup("DEL character (ASCII 127)");
    expected = isdigit(127);
    actual   = ft_isdigit(127);
    printf("ASCII 127: isdigit = %d, ft_isdigit = %d\n", expected, actual);

    return 0;
}