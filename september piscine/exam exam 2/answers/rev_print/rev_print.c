#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return (i);
}

char *rev_print(char *str)
{
	int ilen = ft_strlen(str);
	while( ilen > 0)
	{
		write(1, str + ilen - 1, 1);
		ilen--;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		rev_print(av[1]);
	write(1, "\n", 1);
}

