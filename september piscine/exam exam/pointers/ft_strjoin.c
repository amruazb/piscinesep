#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *s;
    int c = 0;

    s = (char *)malloc(1);  // Allocate memory for the new string

    while (size--)
    {
        char *str = *strs;

        while (*str)
            s[c++] = *str++;

        if (size)
        {
            char *sep_ptr = sep;
            while (*sep_ptr)
                s[c++] = *sep_ptr++;
        }

        strs++;  // Move to the next string pointer in the array
    }

    s[c] = '\0';  // Null-terminate the new string
    return s;
}

// int	main(int a, char **b)
// {
// 	printf ("%s\n", ft_strjoin(a - 1, b, b[a-1]));
// }

int main(void)
{
	char  *string[] = {"hello", "How", "are","you"};
	printf("%s", ft_strjoin(4,string, " :"));
}
