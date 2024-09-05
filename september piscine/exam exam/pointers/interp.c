#include <unistd.h>

void inter(char *str, char *str2)
{
    char *str_ptr = str;
    char *str2_ptr;
    int f = 0;

    while (*str_ptr)
    {
        str2_ptr = str2;
        while (*str2_ptr)
        {
            char *k_ptr = str;
            if (*str_ptr == *str2_ptr)
            {
                while (*k_ptr && k_ptr < str_ptr)
                {
                    if (*k_ptr == *str_ptr)
                    {
                        f = 1;
                    }
                    k_ptr++;
                }
                if (f != 1)
                {
                    write(1, str_ptr, 1);
                    break;
                }
            }
            f = 0;
            str2_ptr++;
        }
        str_ptr++;
    }
    write(1, "\n", 1);
}

int main(int a, char **b)
{
    if (a == 3)
    {
        inter(b[1], b[2]);
    }
}