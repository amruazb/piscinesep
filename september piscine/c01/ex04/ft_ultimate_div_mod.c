/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:09:29 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/08 16:27:22 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/* int	main(void)
{
	int a = 20;
	int b = 4;
	printf("a = %d\nb = %d\n",a,b);
	ft_ultimate_div_mod(&a,&b);
	printf("Quotient = %d\nreminder = %d\n",a,b);
} */
