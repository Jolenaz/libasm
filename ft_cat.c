#include "includes/libasm.h"
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    if (argc == 0)
        ft_cat(0);
    else
    {
        int fd = open(argv[1], O_RDONLY);
        if (fd)
        {
            ft_cat(fd);
        }
    }
    return 0;
}
