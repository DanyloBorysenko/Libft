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
        expected = isalnum(c);
        actual   = ft_isalnum(c);
        printf("char '%c': isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
    }

    // Test 2: Uppercase letters
    setup("Uppercase letters A-Z");
    for (char c = 'A'; c <= 'Z'; c++)
    {
        expected = isalnum(c);
        actual   = ft_isalnum(c);
        printf("char '%c': isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
    }

    // Test 3: Lowercase letters
    setup("Lowercase letters a-z");
    for (char c = 'a'; c <= 'z'; c++)
    {
        expected = isalnum(c);
        actual   = ft_isalnum(c);
        printf("char '%c': isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
    }

    // Test 4: Punctuation
    setup("Punctuation characters");
    char punct[] = "!@#$%^&*()_+-=[]{}|;:',.<>/?`~\"\\";
    for (int i = 0; punct[i]; i++)
    {
        expected = isalnum(punct[i]);
        actual   = ft_isalnum(punct[i]);
        printf("char '%c': isalnum = %d, ft_isalnum = %d\n", punct[i], expected, actual);
    }

    // Test 5: Non-printable characters
    setup("Non-printable ASCII 0-31");
    for (int c = 0; c <= 31; c++)
    {
        expected = isalnum(c);
        actual   = ft_isalnum(c);
        printf("ASCII %d: isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
    }

    // Test 6: DEL character
    setup("DEL character (ASCII 127)");
    expected = isalnum(127);
    actual   = ft_isalnum(127);
    printf("ASCII 127: isalnum = %d, ft_isalnum = %d\n", expected, actual);

    return 0;
}