/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:59:39 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/23 12:31:44 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	digit = nb % 10 + '0';
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	write(1, &digit, 1);
}

int main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(147483648);
	write(1, "\n", 1);
	ft_putnbr(-83648);
	write(1, "\n", 1);

}
/* #include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "Enter a number to print!", 24);
	else if (ac == 2)
		ft_putnbr(atoi(av[1]));
	write(1, "\n", 1);
} */
