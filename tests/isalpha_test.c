#include <stdio.h>
#include <ctype.h>
#include "libft.h"

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s\n", test_nmb, info);
}

int main(void)
{
    int expected;
    int actual;
    int failed;

    // Test 1: Uppercase letters
    setup("Uppercase letters A-Z");
    failed = 0;
    for (char c = 'A'; c <= 'Z'; c++)
    {
        expected = isalpha((unsigned char)c) ? 1 : 0;
        actual = ft_isalpha(c);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 2: Lowercase letters
    setup("Lowercase letters a-z");
    failed = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        expected = isalpha((unsigned char)c) ? 1 : 0;
        actual = ft_isalpha(c);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 3: Digits
    setup("Digits 0-9");
    failed = 0;
    for (char c = '0'; c <= '9'; c++)
    {
        expected = isalpha((unsigned char)c) ? 1 : 0;
        actual = ft_isalpha(c);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 4: Punctuation
    setup("Punctuation characters");
    failed = 0;
    char punct[] = "!@#$^&*()%_+-=[]{}|;:',.<>/?`~\"\\";
    for (int i = 0; punct[i]; i++)
    {
        expected = isalpha((unsigned char)punct[i]) ? 1 : 0;
        actual = ft_isalpha(punct[i]);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalpha = %d, ft_isalpha = %d\n", punct[i], expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 5: Non-printable characters
    setup("Non-printable characters");
    failed = 0;
    for (int c = 0; c <= 31; c++)
    {
        expected = isalpha((unsigned char)c) ? 1 : 0;
        actual = ft_isalpha(c);
        if (expected != actual)
        {
            printf("PROBLEM: ASCII %d: isalpha = %d, ft_isalpha = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 6: DEL character (ASCII 127)
    setup("DEL character (ASCII 127)");
    expected = isalpha((unsigned char)127) ? 1 : 0;
    actual = ft_isalpha(127);
    if (expected != actual)
        printf("PROBLEM: ASCII 127: isalpha = %d, ft_isalpha = %d\n", expected, actual);
    else
        printf("OK\n");

    return 0;
}