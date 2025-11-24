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

    // Test 1: Printable ASCII range (32 - 126)
    setup("Printable ASCII range (32 - 126)");
    for (int c = 32; c <= 126; c++)
    {
        expected = isprint(c) ? 1 : 0;
        actual   = ft_isprint(c);
        if (expected != actual)
            printf("PROBLEM: char '%c' (%d): isprint = %d, ft_isprint = %d\n",
                   c, c, expected, actual);
    }

    // Test 2: Non-printable characters (0 - 31)
    setup("Non-printable characters (0 - 31)");
    for (int c = 0; c < 32; c++)
    {
        expected = isprint(c) ? 1 : 0;
        actual   = ft_isprint(c);
        if (expected != actual)
            printf("PROBLEM: ASCII %d: isprint = %d, ft_isprint = %d\n",
                   c, expected, actual);
    }

    // Test 3: DEL character (127)
    setup("DEL character (127)");
    expected = isprint(127) ? 1 : 0;
    actual   = ft_isprint(127);
    if (expected != actual)
        printf("PROBLEM: DEL (127): isprint = %d, ft_isprint = %d\n",
               expected, actual);

    // Test 4: Negative and >127 values
    setup("Negative and >127 values");
    int test_values[] = {-10, -1, 128, 255, 300};
    for (size_t i = 0; i < sizeof(test_values)/sizeof(test_values[0]); i++)
    {
        int c = test_values[i];
        expected = isprint(c) ? 1 : 0;
        actual   = ft_isprint(c);
        if (expected != actual)
            printf("PROBLEM: value %d: isprint = %d, ft_isprint = %d\n",
                   c, expected, actual);
    }

    printf("All other cases OK\n");

    return 0;
}