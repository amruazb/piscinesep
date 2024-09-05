#include <unistd.h>

void	repeat_alpha(char *str)
{
	while(*str)
	{
		int count = 1;
		if (*str >= 'A' && *str <= 'Z')
			count = *str - 'A' + 1;
		if (*str >= 'a' && *str <= 'z')
			count = *str - 'a' + 1;
		while(count)
		{
			write(1,str,1);
			count--;
		}
		count = 1;
		str++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
}
