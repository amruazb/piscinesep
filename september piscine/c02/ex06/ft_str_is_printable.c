/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:39:35 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/18 09:30:28 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!((*str >= 32) && (*str <= 127)))
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>
#include <unistd.h>
int main()
{
	printf("Mixed non printable:%d\n",ft_str_is_printable("aàmiër"));
	printf("Non printable iterated:%d\n",ft_str_is_printable("aamrî"));
	printf("Non printable:%d\n",ft_str_is_printable("î"));
	printf("Non printable iterated:%d\n",ft_str_is_printable("aamr\n"));
	printf("printable :%d\n",ft_str_is_printable("hehow e"));
} */
