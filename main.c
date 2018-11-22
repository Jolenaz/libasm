#include "includes/libasm.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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

// bzero
    int isBzeroOk()
    {
        char *j = malloc(11);
        int i = 0;
        while (i < 10)
        {
            j[i] = '0' + i;
            i++;
        }
        j[10] = 0;
        ft_bzero(j, 0);
        if (strcmp("0123456789", j))
            return (0);
        ft_bzero(j,2);
        if (j[0] != 0 || j[1] != 0 || j[2] != '2')
            return (0);
        ft_bzero(j,10);
        for (int k = 0; k < 10; k++)
        {
            if (j[k] != 0)
                return (0);
        }
        return (1);
    }
//

//strlen
    int isStrlenOK()
    {
        char *str = "";
        char *str1 = "rtdfyghjk faegzyufhjkW:LD";
        char *str2 = "453zb4s6\n\te\r\\";
        char *str3 = "!@#$^&*()\n";

        size_t a, b; 
        int ret = 1;
        if ((a = strlen(str)) != (b = ft_strlen(str)))
        {
            printf ("%lu\n",a);
            printf ("%lu\n",b);
            ret = 0;
        }

        if ((a = strlen(str1)) != (b = ft_strlen(str1)))
        {
            printf ("%lu\n",a);
            printf ("%lu\n",b);
            ret = 0;
        }

        if ((a = strlen(str2)) != (b = ft_strlen(str2)))
        {
            printf ("%lu\n",a);
            printf ("%lu\n",b);
            ret = 0;
            
        }

        if ((a = strlen(str3)) != (b = ft_strlen(str3)))
        {
            printf ("%lu\n",a);
            printf ("%lu\n",b);
            ret = 0;
        }
        return ret;
    }
//

int main()
{
    ft_puts("Bonjour Main Test\n");

// test is_functions
    if (isDigitOk())
        ft_puts("    ft_isdigit: OK\n");
    else
        ft_puts("    ft_isdigit: NOT OK\n");
    if (isAsciiOk())
        ft_puts("    ft_isascii: OK\n");
    else
        ft_puts("    ft_isascii: NOT OK\n");
    if (isAlphaOk())
        ft_puts("    ft_isalpha: OK\n");
    else
        ft_puts("    ft_isalpha: NOT OK\n");
    if (isPrintOk())
        ft_puts("    ft_isprint: OK\n");
    else
        ft_puts("    ft_isprint: NOT OK\n");
    if (isAlnumOk())
        ft_puts("    ft_isalnum: OK\n");
    else
        ft_puts("    ft_isalnum: NOT OK\n");
//

// to_upper_lower
    if (isToupperOk())
        ft_puts("    ft_toupper: OK\n");
    else 
        ft_puts("    ft_toupper: NOT OK\n");
    if (isTolowerOk())
        ft_puts("    ft_tolower: OK\n");
    else
        ft_puts("    ft_tolower: NOT OK\n");
//

// bzero
    if (isBzeroOk())
        ft_puts("    ft_bzero: OK\n");
    else
        ft_puts("    ft_bzero: NOT OK\n");
//

// strlen
    if (isStrlenOK())
        ft_puts("    ft_strlen: OK\n");
    else
        ft_puts("    ft_strlen: NOT OK\n");
//
    return (0);
}