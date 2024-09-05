/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:04:20 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/10 17:44:46 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
	{
		write(1, "/", 1);
		return ;
	}
	if (i == x && j == y)
	{
		if ((x == 1 && j == y) || (y == 1 && i == x))
			write(1, "\\", 1);
		else
			write(1, "/", 1);
	}
	else if ((i == 1 && j == y) || (i == x && j == 1))
		write(1, "\\", 1);
	else if ((1 < i < x && j == 1) || (i == 1 && 1 < j < y))
		write(1, "*", 1);
	else if ((i == x && 1 < j < y) || (1 < i < x && j == y))
		write(1, "*", 1);
	else if ((1 < i < x) && (1 < j < y))
		write(1, " ", 1);
}
