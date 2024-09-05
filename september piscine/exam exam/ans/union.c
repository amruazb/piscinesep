#include <unistd.h>

void ft_union(char *s1, char *s2)
{
    char seen[256] = {0};
    
    while (*s1)
    {
        if (!seen[(unsigned char)*s1])
        {
            write(1, s1, 1);
            seen[(unsigned char)*s1] = 1;
        }
        s1++;
    }

    while (*s2)
    {
        if (!seen[(unsigned char)*s2])
        {
            write(1, s2, 1);
            seen[(unsigned char)*s2] = 1;
        }
        s2++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
    return 0;
}
