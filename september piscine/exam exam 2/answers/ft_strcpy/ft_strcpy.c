#include <unistd.h>

char *ft_strcpy(char *s1,char *s2)
{
	char *ps1 = s1;
	while(*s2)
	{
		*ps1 = *s2;
		s2++;
		ps1++;
	}
	*ps1 = '\0';
	return(ps1);
}
