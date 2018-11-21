#include "includes/libasm.h"
#include <stdio.h>
#include <ctype.h>

// is_functions
    int isDigitOk()
    {
        int i = -1000;
        int ret = 1;

        while ( i++ < 1000)
        {
            if (ft_isdigit(i) != isdigit(i))
            {
                printf("Error in ft_isdigit for : %d\n",i);
                ret = 0;
            }
        }
        return ret;
    }

    int isAlphaOk()
    {
        int i = -1000;
        int ret = 1;

        while ( i++ < 1000)
        {
            if (ft_isalpha(i) != isalpha(i))
            {
                printf("Error in ft_isalpha for : %d\n",i);
                ret = 0;
            }
        }
        return ret;
    }

    int isAsciiOk()
    {
        int i = -1000;
        int ret = 1;

        while ( i++ < 1000)
        {
            if (ft_isascii(i) != isascii(i))
            {
                printf("Error in ft_isAscii for : %d\n",i);
                ret = 0;
            }
        }
        return ret;
    }

    int isPrintOk()
    {
        int i = -1000;
        int ret = 1;

        while ( i++ < 1000)
        {
            if (ft_isprint(i) != isprint(i))
            {
                printf("Error in ft_isprint for : %d\n",i);
                ret = 0;
            }
        }
        return ret;
    }

    int isAlnumOk()
    {
        int i = -1000;
        int ret = 1;

        while ( i++ < 1000)
        {
            if (ft_isalnum(i) != isalnum(i))
            {
                printf("Error in ft_isprint for : %d\n",i);
                ret = 0;
            }
        }
        return ret;
    }
//

// to_upper_lower
    int isToupperOk()
    {
        int i = -1000;
        int ret = 1;

        while ( i++ < 1000)
        {
            if (ft_toupper(i) != toupper(i))
            {
                printf("Error in ft_toupper for : %d\n",i);
                ret = 0;
            }
        }
        return ret;
    }

    int isTolowerOk()
    {
        int i = -1000;
        int ret = 1;

        while ( i++ < 1000)
        {
            if (ft_tolower(i) != tolower(i))
            {
                printf("Error in ft_tolower for : %d\n",i);
                ret = 0;
            }
        }
        return ret;
    }
//

int main()
{
    printf("Bonjour Main Test\n");
// test is_functions
    if (isDigitOk())
        printf("    ft_isdigit: OK\n");
    if (isAsciiOk())
        printf("    ft_isascii: OK\n");
    if (isAlphaOk())
        printf("    ft_isalpha: OK\n");
    if (isPrintOk())
        printf("    ft_isprint: OK\n");
    if (isAlnumOk())
        printf("    ft_isalnum: OK\n");
//

// to_upper_lower
    if (isToupperOk())
        printf("    ft_toupper: OK\n");
    if (isTolowerOk())
        printf("    ft_tolower: OK\n");
//

    return (0);
}