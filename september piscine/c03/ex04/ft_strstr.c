/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:58:13 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/17 12:26:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ps;
	char	*pf;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		ps = str;
		pf = to_find;
		while (*ps && *pf && (*ps == *pf))
		{
			ps++;
			pf++;
		}
		if (*pf == '\0')
			return (str);
		str++;
	}
	return (0);
}

/* #include <stdio.h>
int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Enter a string and a word to find\n");
	}
	else
	{
		char *result = (ft_strstr(av[1],av[2]));
		if(result)
			printf("Searched word or char is:%s.\nNew string is: %s\n.",av[2],result);
		else
			printf("%s:- this word or char  not found on 
			the string ,please try another word.",av[2]);
	}
} */
