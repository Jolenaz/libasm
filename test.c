#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int ft_strcmp(char*s1,char*s2);

int main()
{
    char* str1 = "0123";
    char* str2 = "01234";
    char* str3 = "0123014";
    char* str4 = 0;

    printf("%s, %s, %d\n",str1,str1,ft_strcmp(str1,str1));
    printf("%s, %s, %d\n",str1,str2,ft_strcmp(str1,str2));
    printf("%s, %s, %d\n",str1,str3,ft_strcmp(str1,str3));
    printf("%s, %s, %d\n",str2,str3,ft_strcmp(str2,str3));
    printf("%s, %s, %d\n",str4,str2,ft_strcmp(str4,str2));
    return (0);
 }
