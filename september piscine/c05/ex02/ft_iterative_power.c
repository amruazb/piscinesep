/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:21:51 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/24 12:22:16 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		i *= nb;
		--power;
	}
	return (i);
}

/* #include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_iterative_power(atoi(av[1]),atoi(av[2])));
	}
	else
	{
		printf("Enter a number and its power:!\n");
	}
}
 */