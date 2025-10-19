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

    // Test 1: Uppercase letters
    setup("Uppercase letters A-Z");
    for (char c = 'A'; c <= 'Z'; c++)
    {
        expected = isalpha(c);
        actual = ft_isalpha(c);
        printf("char '%c': isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
    }

    // Test 2: Lowercase letters
    setup("Lowercase letters a-z");
    for (char c = 'a'; c <= 'z'; c++)
    {
        expected = isalpha(c);
        actual = ft_isalpha(c);
        printf("char '%c': isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
    }

    // Test 3: Digits
    setup("Digits 0-9");
    for (char c = '0'; c <= '9'; c++)
    {
        expected = isalpha(c);
        actual = ft_isalpha(c);
        printf("char '%c': isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
    }

    // Test 4: Punctuation
    setup("Punctuation characters");
    char punct[] = "!@#$^&*()%_+-=[]{}|;:',.<>/?`~\"\\";
    for (int i = 0; punct[i]; i++)
    {
        expected = isalpha(punct[i]);
        actual = ft_isalpha(punct[i]);
        printf("char '%c': isalpha = %d, ft_isalpha = %d\n", punct[i], expected, actual);
    }

    // Test 5: Non-printable characters
    setup("Non-printable characters");
    for (int c = 0; c <= 31; c++)
    {
        expected = isalpha(c);
        actual = ft_isalpha(c);
        printf("ASCII %d: isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
    }

    // Test 6: DEL character
    setup("DEL character (ASCII 127)");
    expected = isalpha(127);
    actual = ft_isalpha(127);
    printf("ASCII 127: isalpha = %d, ft_isalpha = %d\n", expected, actual);

    return 0;
}