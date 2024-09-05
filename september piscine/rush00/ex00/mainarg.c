/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainarg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:11:07 by aabashee          #+#    #+#             */
/*   Updated: 2024/02/11 13:34:56 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ps(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_atoi(const char *str)
{
	unsigned long long	num;
	int					negative;

	num = 0;
	negative = 1;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * negative);
}

void	rush(int x, int y);

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac != 3)
	{
		ps("Enter the numbers of rows and columns!\n");
		return (1);
	}
	x = ft_atoi(av[1]);
	y = ft_atoi(av[2]);
	rush(x, y);
	return (0);
}
