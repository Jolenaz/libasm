#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    ft_puts(char *ptr);

int main()
{
    int ret = ft_puts("bonjour monde");

    printf("%d\n",ret);

    return (0);
}