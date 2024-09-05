#include <unistd.h>

void inter(char *str1, char *str2)
{
	char seen[256] = {0};
	while(*str1)
	{
		if(!seen[(unsigned char)*str1]++)
		{
			char *ps2 = str2;
			while(*ps2 && *ps2 != *str1)
				ps2++;
			if (*ps2 == *str1)
				write(1, str1, 1);
		}
		str1++;
	}
}
int main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1],av[2]);
	write(1, "\n", 1);
}


