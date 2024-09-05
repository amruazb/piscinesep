/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:39 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/11 12:02:11 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
		if (*str >= 'A' && *str <= 'Z')
			str++;
	else
		return (0);
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("upper case:%d\n",ft_str_is_uppercase("HI"));
// 	printf("lower case:%d\n",ft_str_is_uppercase("how are you!"));
// }
