#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    int seen[256] = {0}; // Array to track seen characters
    char result[256];
    int resultIndex = 0;

    while (*s2)
    {
        seen[(unsigned char)*s2] = 1;
        s2++;
    }

    while (*s1)
    {
        if (seen[(unsigned char)*s1])
        {
            result[resultIndex++] = *s1;
        }
        s1++;
    }

    result[resultIndex] = '\0';

    if (result[0] != '\0')
    {
        write(1, result, resultIndex);
    }

    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
        wdmatch(av[1], av[2]);
    else
        write(1, "\n", 1);

    return 0;
}
