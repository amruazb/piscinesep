/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:24:15 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/25 17:47:46 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (nb / 2 > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int a, char **b)
{
	int	prime;

	if (a == 2)
	{
		prime = ft_is_prime(atoi(b[1]));
		int p = printf("%d", prime);
	}
	else
		printf("Enter a number to find prime number\n");

} */
