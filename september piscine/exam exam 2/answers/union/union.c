#include <unistd.h>

void ft_union(char *str1, char *str2)
{
	char arr[256] = {0};
	while(*str1)
	{
		if(!arr[(unsigned char)*str1])
		{
			write(1, str1, 1);
			arr[(unsigned char)*str1] = 1;
		}
		str1++;
	}
	while(*str2)
	{
		if(!arr[(unsigned char)*str2])
		{
			write(1, str2, 1);
			arr[(unsigned char)*str2] = 1;
		}
		str2++;
	}
}


int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
    return 0;
}

