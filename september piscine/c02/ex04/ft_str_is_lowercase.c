/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:40:58 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/11 12:02:46 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
		if (*str >= 'a' && *str <= 'z')
			str++;
	else
		return (0);
	return (1);
}

/* #include <stdio.h>
int main()
{
	printf("Mixed uppercase%d\n",ft_str_is_lowercase("helAlo"));
	printf("Lower case%d\n",ft_str_is_lowercase("hello"));
} */
