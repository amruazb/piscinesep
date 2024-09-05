i#include <stdlib.h>
i

int ft_strlen(char *str)
{
	int i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return(i);
}
char *ft_strdup(char *src)
{
	char *pstr;

	pstr = malloc(ft_strlen(src)+ 1);
	if(pstr == NULL)
	{
		return(NULL);
	}
	char *str = pstr;
	while(*src)
	{
		*pstr = *src;
		src++;
		pstr++;
	}
	*pstr = '\0';
	return(str);
}
