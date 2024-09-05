/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:23:08 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/24 12:23:18 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (index);
	}
}

/* #include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_fibonacci(atoi(av[1])));
	}
	else
	{
		printf("Enter a number to find the fibonacci of it!\n");
	}
} */
