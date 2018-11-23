#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_puts(char *ptr);
char    *ft_strcpy(char *dst, char *src);
char    *ft_strcat(char *dst, char *src);

int main()
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
        ft_puts("Error : ft_strcat or ft_strcpy");
    else
    {
        ft_puts("    ft_strcpy: OK\n");
        ft_puts("    ft_strcat: OK\n");
    }

    return (0);
}