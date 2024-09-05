/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:07:43 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/24 09:18:47 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* int main(int ac,char  **av)
{
	if (ac < 3)
	{
		printf("Enter 2 integer to swap a & b");
		return (1);
	}
	
	int a1 = atoi(av[1]);
	int b2 = atoi(av[2]);
	int *pa = &a1;
	int *pb = &b2;
	ft_swap(pa, pb);
	printf("a = %d\nb = %d\n", a1, b2);
	return(0);
} */