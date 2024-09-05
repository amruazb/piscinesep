#include <unistd.h>

void wdmatch(char *s1,char *s2)
{
    char *ps1 = s1;
    int len = 0;
    while(*s1)
    {
        len++;
        s1++;
    }
    int i = 0;
    while(*s2 && i < len)
    {
        if (*s2 == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if(i == len)
    {
        write(1, ps1,len);
    }
}

int main(int ac, char **av)
{
    if(ac == 3)
        wdmatch(av[1], av[2]);
    write(1, "\n", 1);
}