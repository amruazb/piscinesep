/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:24:36 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/25 17:52:13 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_is_prime(int nb)
// {
// 	int	i;

// 	i = 2;
// 	if (nb <= 1)
// 	{
// 		return (0);
// 	}
// 	while (i * i <= nb)
// 	{
// 		if (nb % i == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int	ft_find_next_prime(int nb)
// {
// 	nb++;
// 	while (1)
// 	{
// 		if (ft_is_prime(nb))
// 			return (nb);
// 		nb++;
// 	}
// }
#include <unistd.h>

int	check_prime(int nb)
{
	int	prm;

	prm = 2;
	if (nb < 2)
		return (0);
	while (prm <= (nb / prm))
	{
		if (nb % prm == 0)
			return (0);
		prm++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (check_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/* #include <stdio.h>
#include <stdlib.h>
int	main(int a, char **av)
{
	int	next_prime;

	if (a == 2)
	{
		next_prime = ft_find_next_prime(atoi(av[1]));
		printf("Next prime after %d is %d\n",atoi(av[1]), next_prime);
	}
	else
		printf("Enter a prime number to find its next prime:\n");
} */
