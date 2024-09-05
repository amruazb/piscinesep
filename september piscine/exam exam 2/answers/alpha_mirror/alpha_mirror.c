#include <unistd.h>
void mirror_alpha_string(char *str)
{
    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z'))
            *str = 'Z' - (*str - 'A');
        else if ((*str >= 'a' && *str <= 'z'))
           *str = 'z' - (*str - 'a');
            write(1, str++, 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
	    mirror_alpha_string(av[1]);
    write(1, "\n", 1);
}

