/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:23:31 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/24 12:23:46 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int a, char **b)
{
	int	sqrt;

	if (a == 2)
	{
		sqrt = ft_sqrt(atoi(b[1]));
		printf("%d", sqrt);
	}
} */
