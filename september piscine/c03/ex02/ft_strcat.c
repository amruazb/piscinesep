/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:55:06 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/17 12:25:40 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

/* #include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		ft_strcat(av[1], av[2]);
	}
	else 
	{
		printf("Enter a Destination and a Source to contatenate:\n");
		return (1);
	}
		printf("destination is now:%s\n",av[1]);
} */
