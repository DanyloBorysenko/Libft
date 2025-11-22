#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test 1
    printf("Test 1\nfd = 1, c = 'A'. 'A' char must be printed\n");
    fflush(stdout);          // flush before writing directly
    ft_putchar_fd('A', 1);
    printf("\n");            // add newline after

    // Test 2
    printf("\nTest 2\nfd = 2, c = 'A'. 'A' char must be printed\n");
    fflush(stdout);          // flush before writing
    ft_putchar_fd('A', 2);
    printf("\n");
}