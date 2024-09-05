/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:12:04 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/08 15:16:09 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
/* 
int main(int ac,char **av)
{
	int i = 1;
	while (ac > i)
	{
		ft_putstr((av[i++]));
		ft_putstr("\n");
	}
} */
