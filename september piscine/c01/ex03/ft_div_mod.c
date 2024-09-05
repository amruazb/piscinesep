/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:09:10 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/08 16:16:59 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main()
{
	int	a;
	int	b;
	int	div; 
	int	mod;

	a = 45;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d", div, mod);
} */
