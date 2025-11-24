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

    int test_values[] = {0, 127, 'A', 128, -1, 64};
    const char *descriptions[] = {
        "Lower bound (0)",
        "Upper bound (127)",
        "Middle of ASCII range ('A')",
        "Non-ASCII positive value (128)",
        "Negative value (-1)",
        "Random value in range (64)"
    };

    for (int i = 0; i < 6; i++)
    {
        setup(descriptions[i]);
        failed = 0;
        expected = isascii(test_values[i]) ? 1 : 0;
        actual   = ft_isascii(test_values[i]);
        if (expected != actual)
            printf("PROBLEM: value %d: isascii = %d, ft_isascii = %d\n", test_values[i], expected, actual);
        else
            printf("OK\n");
    }

    return 0;
}