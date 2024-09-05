/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:20:57 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/24 12:21:29 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

/* #include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_recursive_factorial(atoi(av[1])));
	}
	else 
		printf("Enter a number!\n");
} */
