#include <unistd.h>

void inter(char *str1, char *str2)
{
	char *ps1 = str1;
	char *ps2;
	char *kps1;
	int  flag = 0;
	while(*ps1)
	{
		ps2 = str2;
		while(*ps2)
		{
			kps1 = str1;
			if(*ps1 == *ps2)
			{
				while(*kps1 && kps1 < ps1)
				{
					if(*kps1 == *ps1)
					{
						flag = 1;
					}
					kps1++;
				}
				
				if(flag != 1)
				{
					write(1, ps1, 1);
					break;
				}
			}
			flag = 0;
			ps2++;
		}
		ps1++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1],av[2]);
	write(1, "\n", 1);
}

void inter(char *s1,char *s2)
{
	char seen[256] = {0};
	while(*s1)
	{
		if(!seen[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if (*ps2 == *s1)
				write(1, s1, 1);
		}
		s1++;
		
	}
}
int main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1],av[2]);
	write(1, "\n",1);
}

void inter(char *s1, char *s2)
{
	char seen[256] = {0};
	while(*s1)
	{
		if(!seen[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if (*ps2 == *s1)
				write(1, s1, 1);
		}
		s1++;
	}
}


void inter(char *s1, char *s2)
{
	char seen[256] = {0};
	while(*s1)
	{
		if(!seen[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++)
		}
	}
}