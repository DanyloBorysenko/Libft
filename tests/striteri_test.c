#include "libft.h"
#include <stdio.h>
#include <string.h>

static int test_nmb = 0;

void setup(const char *info)
{
    test_nmb++;
    printf("\nTest %d: %s -> ", test_nmb, info);
}

void toupper_char(unsigned int i, char *c)
{
    if (!c) return;
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int check_str(const char *expected, const char *actual)
{
    if ((expected == NULL && actual == NULL) ||
        (expected && actual && strcmp(expected, actual) == 0))
    {
        printf("OK\n");
        return 1;
    }
    printf("PROBLEM: expected '%s', actual '%s'\n",
           expected ? expected : "(null)",
           actual ? actual : "(null)");
    return 0;
}

int main(void)
{
    char s1[50] = "Hello world";
    char s2[50] = "";
    char s3[50] = "Hello world";
    char s4[2]  = "a";

    // Test 1: normal string
    setup("s = 'Hello world'");
    ft_striteri(s3, toupper_char);
    check_str("HeLlO WoRlD", s3);

    // Test 2: single character
    setup("s = 'a'");
    ft_striteri(s4, toupper_char);
    check_str("A", s4);

    // Test 3: empty string
    setup("s = ''");
    ft_striteri(s2, toupper_char);
    check_str("", s2);

    // Test 4: f is NULL
    setup("s = 'Hello world', f is NULL");
    ft_striteri(s1, NULL);
    check_str("Hello world", s1);

    // Test 5: s = NULL
    setup("s = NULL");
    ft_striteri(NULL, toupper_char);
    printf("OK (no crash)\n");

    return 0;
}