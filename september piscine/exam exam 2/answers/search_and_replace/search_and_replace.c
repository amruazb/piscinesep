#include <unistd.h>

void search_and_replace(char *str, char find, char replace)
{
	char *ps = str;
	while(*ps)
	{
		if(*ps == find)
		{
			*ps = replace;
		}
		write(1, ps++, 1);
	}
}
int main(int ac, char **av)
{
	if (ac != 4 || av[2][1] != '\0' || av[3][1] != '\0')
	{	
		write(1, "\n", 1);
		return 0;
	}
	else
		search_and_replace(av[1], av[2][0], av[3][0]);
	write(1, "\n", 1);
}

