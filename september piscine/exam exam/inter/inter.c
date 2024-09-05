/* #include <unistd.h>

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
} */


void inter(char *s1, char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
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
	char arr[256] ={0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
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

void inter(char *s1,char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if(*ps2 == *s1)
				write(1, s1, 1);

		}
		s1++;
	}
}

void inter(char *s1,char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
		{
			char *ps2 = ps2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if (*ps2 == *s1)
				write(1, s1, 1);
		}
		s1++;
	}
}

void inter(char *s1,char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if(*ps2 == *s1)
				write(1, s1, 1);
		}
		s1++;
	}
}

void inter(char *s1,char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*s2 && *s2 != *s1)
				ps2++;
			if(*ps2 == *s1)
				write(1, s1, 1);
		}
		s1++;
	}
}

void inter(char *s1, char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if(*ps2 == *s1)
				write(1, s1,1);
		}
		s1++;
	}
}

void inter(char *s1, char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if(*ps2 == *s1)
				write(1, s1, 1);
		}
		s1++;
	}
}

#include <unistd.h>

void inter(char *s1,char *s2)
{
	char arr[256] = {0};
	while(*s1)
	{
		if(!arr[(unsigned char)*s1]++)
		{
			char *ps2 = s2;
			while(*ps2 && *ps2 != *s1)
				ps2++;
			if(*ps2 == *s1)
				write(1, s1, 1);

		}
		s1++;
	}
}