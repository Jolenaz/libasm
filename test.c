#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

void     ft_cat(int fd);

int main()
{
    // char buf[1024 + 1];

    int fd = open("test",O_RDONLY);
    // int fd = 0;

    ft_cat(fd);
    // ft_bzero(buf, 1024 + 1);

    // while (read(fd, buf, 1024) > 0)
    // {
    //     ft_putstr(buf);
    //     ft_bzero(buf, 1024 + 1);
    // }
    return (0);
 }
