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

    // Test 1: Digits 0-9
    setup("Digits 0-9");
    failed = 0;
    for (char c = '0'; c <= '9'; c++)
    {
        expected = isalnum((unsigned char)c) ? 1 : 0;
        actual   = ft_isalnum(c);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 2: Uppercase letters A-Z
    setup("Uppercase letters A-Z");
    failed = 0;
    for (char c = 'A'; c <= 'Z'; c++)
    {
        expected = isalnum((unsigned char)c) ? 1 : 0;
        actual   = ft_isalnum(c);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 3: Lowercase letters a-z
    setup("Lowercase letters a-z");
    failed = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        expected = isalnum((unsigned char)c) ? 1 : 0;
        actual   = ft_isalnum(c);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 4: Punctuation characters
    setup("Punctuation characters");
    char punct[] = "!@#$%^&*()_+-=[]{}|;:',.<>/?`~\"\\";
    failed = 0;
    for (int i = 0; punct[i]; i++)
    {
        expected = isalnum((unsigned char)punct[i]) ? 1 : 0;
        actual   = ft_isalnum(punct[i]);
        if (expected != actual)
        {
            printf("PROBLEM: char '%c': isalnum = %d, ft_isalnum = %d\n", punct[i], expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 5: Non-printable ASCII 0-31
    setup("Non-printable ASCII 0-31");
    failed = 0;
    for (int c = 0; c <= 31; c++)
    {
        expected = isalnum((unsigned char)c) ? 1 : 0;
        actual   = ft_isalnum(c);
        if (expected != actual)
        {
            printf("PROBLEM: ASCII %d: isalnum = %d, ft_isalnum = %d\n", c, expected, actual);
            failed = 1;
        }
    }
    if (!failed) printf("OK\n");

    // Test 6: DEL character (ASCII 127)
    setup("DEL character (ASCII 127)");
    expected = isalnum((unsigned char)127) ? 1 : 0;
    actual   = ft_isalnum(127);
    if (expected != actual)
        printf("PROBLEM: ASCII 127: isalnum = %d, ft_isalnum = %d\n", expected, actual);
    else
        printf("OK\n");

    return 0;
}