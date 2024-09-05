#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	char *ps1 = s1;
	int i = 0;

	while(*s1)
	{
		++i;
		++s1;
	}

	int j = 0;

	while(*s2 && j < i)
	{
		if (*s2 == ps1[j])
		{
			j++;
		}
		++s2;
	}

	if(j == i)
	{
		write(1, ps1,i);
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1],av[2]);
	write(1, "\n",1);
}

