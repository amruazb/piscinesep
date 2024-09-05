#include <unistd.h>

void rotone(char *str)
{
	while(*str)
	{
		if(*str >= 'A' && *str <= 'Y' || *str >= 'a' && *str <= 'y')
			*str += 1;
		else if(*str == 'Z' || *str == 'z')
			*str -= 25;
		write(1, str++, 1);
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}

