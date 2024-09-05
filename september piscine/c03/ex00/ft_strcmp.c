/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:09:33 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/17 12:18:23 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* #include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 3)
		printf("Enter two strings or words to compare:\n");
	else
		i = ft_strcmp(av[1], av[2]);
	printf("compared %s and %s\n The result is:%i", av[1], av[2], i);
} */
