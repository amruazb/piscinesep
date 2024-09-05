/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:36:16 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/23 14:06:54 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	negative;

	num = 0;
	negative = 1;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * negative);
}

/* #include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	a;

	if (ac != 2)
	{
		printf("Enter a string with numbers to convert!\n");
	}
	else if (ac == 2)
	{
		a = ft_atoi(av[1]);
		printf("converted string to int are: %d\n", a);
	}
} */
