/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:53:28 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/18 11:10:07 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}

/* #include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 4)
		printf("Enter two strings or words to compare and a limit:\n");
	else
		i = ft_strncmp(av[1], av[2], atoi(av[3]));
	printf("compared %s and %s\n The result is:%i", av[1], av[2], i);
} */
