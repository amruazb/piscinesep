#include <unistd.h>

void rot_13(char *str)
{
	while(*str)
	{
		if((*str >= 'A' && *str <= 'M') || (*str >= 'a' && *str <= 'm'))
			*str += 13;
		else if((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			*str -= 13;
		write(1, str++, 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
}

