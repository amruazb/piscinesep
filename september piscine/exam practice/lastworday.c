#include <unistd.h>
void last_word(char *str)
{
	while (*str)
		str++;
	str--;
	while (*str == 32 || *str == '\t')
		str--;
	while (*str > 0)
	{
		if(*str == 32 || *str == '\t')
			break;
		str--;
	}
	str++;
	while (*str && *str != 32 && *str != '\t')
		write(1, str++, 1);
}
int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}

