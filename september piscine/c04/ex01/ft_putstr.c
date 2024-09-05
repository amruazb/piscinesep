/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:58:14 by aabashee          #+#    #+#             */
/*   Updated: 2024/03/20 04:16:52 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (*str)
	{
		write(1, str, 1);
		ft_putstr(str + 1);
	}
}

int main(int ac, char **av)
{
	if(ac != 2)
	{
		ft_putstr("Enter a string to print!\n");
	}
	else if(ac == 2)
	{
		ft_putstr(av[1]);;
		ft_putstr("\n");
	}
}
