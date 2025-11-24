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

    int test_values[] = {
        '0','1','2','3','4','5','6','7','8','9', // digits
        'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z', // uppercase
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z', // lowercase
        0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31, // non-printable
        '!','@','#','$','%','^','&','*','(',')','_','+','-','=','[',']','{','}','|',';',':','\'',',','.','<','>','/','?','`','~','\"','\\',
        127 // DEL
    };

    const char *desc = "Check ft_isdigit against isdigit";

    setup(desc);

    for (size_t i = 0; i < sizeof(test_values)/sizeof(test_values[0]); i++)
    {
        expected = isdigit(test_values[i]) ? 1 : 0;
        actual   = ft_isdigit(test_values[i]);
        if (expected != actual)
            printf("PROBLEM: value %d ('%c'): isdigit = %d, ft_isdigit = %d\n",
                   test_values[i], (test_values[i] >= 32 && test_values[i] <= 126) ? test_values[i] : '?',
                   expected, actual);
    }

    printf("All other cases OK\n");

    return 0;
}