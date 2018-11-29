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

//strcpy strcat
    int isStrcatOK()
    {    
        char *src = "Bonjour monde ";
        char *src2 = "\n";
        char *dst_ft = malloc(1000);
        char *dst = malloc(1000);

        ft_strcpy(dst_ft, src);
        ft_strcat(dst_ft, src);
        ft_strcat(dst_ft, src);
        ft_strcat(dst_ft, src);
        ft_strcat(dst_ft, src2);

        strcpy(dst, src);
        strcat(dst, src);
        strcat(dst, src);
        strcat(dst, src);
        strcat(dst, src2);

        if (strcmp(dst_ft, dst))
            return (0);
        return 1;
    }
//

//memset
    int isMemsetOk(){
        char *src = "Bonjour monde ";
        char *src2 = "\n";
        char *dst_ft = malloc(1000);
        char *dst = malloc(1000);

        ft_strcpy(dst_ft, src);
        ft_strcat(dst_ft, src2);
        strcpy(dst, src);
        strcat(dst, src2);
        if (dst_ft != ft_memset((void*)dst_ft, 654, 4))
            return(0);
        if (strcmp(dst_ft, memset(dst, 654, 4) ))
            return (0);
        return (1);
    }
//

//memcpy
    typedef struct s_list{
    int i;
    float   k;
    char    *str;

    }               t_list;

    int isMemcpyOk()
    {
        t_list src;
        src.i = 145;
        src.k = 0.45641f;
        src.str = "fghyjuikolp523457";
        size_t len = sizeof(t_list);
        void *dst_ft = malloc(len);
        void *dst = malloc(len);

        if (dst_ft != ft_memcpy(dst_ft, (void*)&src, len))
           return (0);
        memcpy(dst, (void*)&src, len);

        if (memcmp(dst_ft, dst, len))
            return (0);

        return (1);
    }
//

//strcmp
    int isStrcmpOk()
    {
        char* str1 = "0123";
        char* str2 = "";
        char* str3 = "0123014";
        int ret = 1;

        if (strcmp(str1 ,str2) != ft_strcmp(str1, str2)){
            printf("eror ft_strcmp : %s %s\n",str1,str2);
            ret = 0;
        }
        if (strcmp(str1 ,str3) != ft_strcmp(str1, str3)){
            printf("eror ft_strcmp : %s %s\n",str1,str3);
            ret = 0;
        }
        if (strcmp(str3 ,str2) != ft_strcmp(str3, str2)){
            printf("eror ft_strcmp : %s %s\n",str3,str2);
            ret = 0;
        }
        if (strcmp(str2 ,str2) != ft_strcmp(str2, str2)){
            printf("eror ft_strcmp : %s %s\n",str2,str2);
            ret = 0;
        }
        return (ret);
    }
//

//memcmp
    int isMemcmpOk()
    {
        char* str1 = "0123";
        char* str2 = "";
        char* str3 = "0123014";
        char* str4 = "\200";
        char* str5 = "\0";
        int ret = 1;
        
        if (memcmp(str4 ,str5, 1) != ft_memcmp(str4, str5, 1)){
            printf("eror ft_memcmp : %s %s %d\n",str4,str5,1);
            ret = 0;
        }
        if (memcmp(str1 ,str2, 10) != ft_memcmp(str1, str2, 10)){
            printf("eror ft_memcmp : %s %s %d\n",str1,str2,10);
            ret = 0;
        }
        if (memcmp(str1 ,str3, 10) != ft_memcmp(str1, str3, 10)){
            printf("eror ft_memcmp : %s %s %d\n",str1,str3,10);
            ret = 0;
        }
        if (memcmp(str3 ,str2, 10) != ft_memcmp(str3, str2, 10)){
            printf("eror ft_memcmp : %s %s %d\n",str3,str2,10);
            ret = 0;
        }
        if (memcmp(str2 ,str2, 10) != ft_memcmp(str2, str2, 10)){
            printf("eror ft_memcmp : %s %s %d\n",str2,str2,10);
            ret = 0;
        }
        if (memcmp(str1 ,str2, 0) != ft_memcmp(str1, str2, 0)){
            printf("eror ft_memcmp : %s %s %d\n",str1,str2,0);
            ret = 0;
        }
        if (memcmp(str1 ,str3, 0) != ft_memcmp(str1, str3, 0)){
            printf("eror ft_memcmp : %s %s %d\n",str1,str3,0);
            ret = 0;
        }
        if (memcmp(str3 ,str2, 0) != ft_memcmp(str3, str2, 0)){
            printf("eror ft_memcmp : %s %s %d\n",str3,str2,0);
            ret = 0;
        }
        if (memcmp(str2 ,str2, 0) != ft_memcmp(str2, str2, 0)){
            printf("eror ft_memcmp : %s %s %d\n",str2,str2,0);
            ret = 0;
        }
        if (memcmp(str1 ,str2, 6) != ft_memcmp(str1, str2, 6)){
            printf("eror ft_memcmp : %s %s %d\n",str1,str2,6);
            ret = 0;
        }
        if (memcmp(str1 ,str3, 6) != ft_memcmp(str1, str3, 6)){
            printf("eror ft_memcmp : %s %s %d\n",str1,str3,6);
            ret = 0;
        }
        if (memcmp(str3 ,str2, 6) != ft_memcmp(str3, str2, 6)){
            printf("eror ft_memcmp : %s %s %d\n",str3,str2,6);
            ret = 0;
        }
        if (memcmp(str2 ,str2, 6) != ft_memcmp(str2, str2, 6)){
            printf("eror ft_memcmp : %s %s %d\n",str2,str2,6);
            ret = 0;
        }
        return (ret);
    }
//

// strchr
    int isStrchrOk()
    {
        char* str3 = "0123014";
        int    c0 = '3';
        int    c1 = 0x153700 | '3';
        int    c2 = 0;
        int    c3 = '4';
        int    c4 = '5';
        int    ret = 1;

        if (ft_strchr(str3,c0) != strchr(str3,c0)){
            ret = 0;
            printf("%s, %c\n",str3,c0);}
        if (ft_strchr(str3,c1) != strchr(str3,c1)){
            ret = 0;
            printf("%s, %c\n",str3,c1);}
        if (ft_strchr(str3,c2) != strchr(str3,c2)){
            ret = 0;
            printf("%s, %c\n",str3,c2);}
        if (ft_strchr(str3,c3) != strchr(str3,c3)){
            ret = 0;
            printf("%s, %c\n",str3,c3);}
        if (ft_strchr(str3,c4) != strchr(str3,c4)){
            ret = 0;
            printf("%s, %c\n",str3,c4);}

        return (ret);
    }
//

int main(int ac, char **av)
{
    int ret = ft_puts("Bonjour Main Test");

// test is_functions
    if (isDigitOk())
        ft_puts("    ft_isdigit: OK");
    else
        ft_puts("    ft_isdigit: NOT OK");
    if (isAsciiOk())
        ft_puts("    ft_isascii: OK");
    else
        ft_puts("    ft_isascii: NOT OK");
    if (isAlphaOk())
        ft_puts("    ft_isalpha: OK");
    else
        ft_puts("    ft_isalpha: NOT OK");
    if (isPrintOk())
        ft_puts("    ft_isprint: OK");
    else
        ft_puts("    ft_isprint: NOT OK");
    if (isAlnumOk())
        ft_puts("    ft_isalnum: OK");
    else
        ft_puts("    ft_isalnum: NOT OK");
//

// to_upper_lower
    if (isToupperOk())
        ft_puts("    ft_toupper: OK");
    else 
        ft_puts("    ft_toupper: NOT OK");
    if (isTolowerOk())
        ft_puts("    ft_tolower: OK");
    else
        ft_puts("    ft_tolower: NOT OK");
//

// bzero
    if (isBzeroOk())
        ft_puts("    ft_bzero: OK");
    else
        ft_puts("    ft_bzero: NOT OK");
//

// strlen
    if (isStrlenOK())
        ft_puts("    ft_strlen: OK");
    else
        ft_puts("    ft_strlen: NOT OK");
//

//  strcpy strcat
    if (!isStrcatOK())
        ft_puts("Error : ft_strcat or ft_strcpy");
    else
    {
        ft_puts("    ft_strcpy: OK");
        ft_puts("    ft_strcat: OK");
    }
//

// memest
    if (isMemsetOk())
        ft_puts("    ft_memset: OK");
    else
        ft_puts("    ft_memset: NOT OK");
//

// memcpy
    if (isMemcpyOk())
        ft_puts("    ft_memcpy: OK");
    else
        ft_puts("    ft_memcpy: NOT OK");
//

// strcmp
    if (isStrcmpOk())
        ft_puts("    ft_strcmp: OK");
    else
        ft_puts("    ft_strcmp: NOT OK");
//

// strcmp
    if (isMemcmpOk())
        ft_puts("    ft_memcmp: OK");
    else
        ft_puts("    ft_memcmp: NOT OK");
//

// strchr
    if (isStrchrOk())
        ft_puts("    ft_strchr: OK");
    else
        ft_puts("    ft_strchr: NOT OK");
//

    return (0);
}