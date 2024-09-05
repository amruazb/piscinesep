/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:19:26 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/24 12:20:42 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

/* int	main(int ac, char **av)
{
	int	factorial;

	if (ac == 2)
	{
		factorial = ft_iterative_factorial(atoi(av[1]));
		printf("%d\n", factorial);
	}
	else
		printf("Enter a number to get factorial!\n");
} */
