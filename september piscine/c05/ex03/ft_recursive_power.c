/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:22:37 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/24 12:22:51 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb * ft_recursive_power(nb, (power - 1));
	return (i);
}

/* #include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_recursive_power(atoi(av[1]),atoi(av[2])));
	}
	else
	{
		printf("Enter a number and its power :!\n");
	}
} */
