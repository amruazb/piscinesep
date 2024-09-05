#include <unistd.h>

void    ft_wd_match(char *s1, char *s2)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (s1[len])
        ++len;
    while (*s2 && len > i)
        (*s2++ == s2[i])? ++i : 0;
    if (len == i)
        write (1, s1, len);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_wd_match(av[1], av[2]);
    }
}