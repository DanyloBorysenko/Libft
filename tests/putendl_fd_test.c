#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test 1
    printf("Test 1\nfd = 1, string = 'Hello'\n");
    printf("'Hello' and newline must be printed\n");
    fflush(stdout);            // flush before writing
    ft_putendl_fd("Hello", 1);

    // Test 2
    printf("\nTest 2\nfd = 2, string = 'Hello'\n");
    printf("'Hello' and newline must be printed\n");
    fflush(stdout);            // flush before writing
    ft_putendl_fd("Hello", 2);

    // Test 3
    printf("\nTest 3\nfd = 2, string = NULL. function must do nothing, NO ERRORS\n");
    fflush(stdout);            // flush before writing
    ft_putendl_fd(NULL, 2);
}