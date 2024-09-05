/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:57:02 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/08 16:39:22 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* int main(void)
{
	int i = 105;
	int *p = &i;

	printf("i = %d\n",i);
	printf("*p = %d\n",*p);
	ft_ft(&i);
	printf("we run the ft_ft(&i) and the result of i is  = %d",i);
} */