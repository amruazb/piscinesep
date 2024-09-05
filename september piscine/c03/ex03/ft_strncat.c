/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:57:25 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/17 12:25:55 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (*src && nb > 0)
	{
		*p = *src;
		p++;
		src++;
		nb--;
	}
	*p = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac != 4)
		printf("Enter destination source and the limit:\n");
	else
		ft_strncat(av[1],av[2],atoi(av[3]));
	printf("The limit is :%s\n The destination is now: %s", av[3], av[1]);

} */
