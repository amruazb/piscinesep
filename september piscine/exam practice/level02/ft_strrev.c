#include <unistd.h>

char *ft_strrev(char *str)
{
	char *st = str;
	char *ed = str;

	while(*ed)
		ed++;
	ed--;
	while(st <= ed)
	{
		char temp = *st;
		*st = *ed;
		*ed = temp;
		st++;
		ed--;
	}
	return(str);
}

#include <stdio.h>

int main(int ac , char **av)
{
	if(ac == 2)
	printf("%s\n",ft_strrev(av[1]));
}

