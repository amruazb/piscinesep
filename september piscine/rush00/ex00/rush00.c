/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:06:47 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/10 17:49:45 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (!((x >= 1) && (x <= 2147483647)) || !((y >= 1) && (y <= 2147483647))) 
	{
		write(1, "rows and columns must be  unsigned integers!", 53);
		return ;
	}
	while (i <= x && y > 0)
	{
		while (j <= y)
		{
			ft_putchar(i, j, x, y);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 1;
	}
}
