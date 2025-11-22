#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    // Test 1
    printf("Test 1\nfd = 1, n = 100\n");
    printf("'100' must be printed\n");
    fflush(stdout);
    ft_putnbr_fd(100, 1);
    printf("\n");

    // Test 2
    printf("\nTest 2\nfd = 2, n = 100\n");
    printf("'100' must be printed\n");
    fflush(stdout);
    ft_putnbr_fd(100, 2);
    printf("\n");

    // Test 3
    printf("\nTest 3\nfd = 1, n = 1568\n");
    printf("'1568' must be printed\n");
    fflush(stdout);
    ft_putnbr_fd(1568, 1);
    printf("\n");

    // Test 4
    printf("\nTest 4\nfd = 1, n = INT_MIN (-2147483648)\n");
    printf("'-2147483648' must be printed\n");
    fflush(stdout);
    ft_putnbr_fd(INT_MIN, 1);
    printf("\n");

    // Test 5
    printf("\nTest 5\nfd = 1, n = INT_MAX (2147483647)\n");
    printf("'2147483647' must be printed\n");
    fflush(stdout);
    ft_putnbr_fd(INT_MAX, 1);
    printf("\n");
}