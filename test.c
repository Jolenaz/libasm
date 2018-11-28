#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int ft_memcmp(void*s1,void*s2,size_t n);
char *ft_strchr(char*s1,int c);

int main()
{
    char* str3 = "0123014";
    int    c0 = '3';
    int    c1 = 0x153700 | '3';
    int    c2 = 0;
    int    c3 = '4';
    int    c4 = '5';

    if (ft_strchr(str3,c0) != strchr(str3,c0))
        printf("%s, %c\n",str3,c0);
    if (ft_strchr(str3,c1) != strchr(str3,c1))
        printf("%s, %c\n",str3,c1);
    if (ft_strchr(str3,c2) != strchr(str3,c2))
        printf("%s, %c\n",str3,c2);
    if (ft_strchr(str3,c3) != strchr(str3,c3))
        printf("%s, %c\n",str3,c3);
    if (ft_strchr(str3,c4) != strchr(str3,c4))
        printf("%s, %c\n",str3,c4);

    return (0);
 }
