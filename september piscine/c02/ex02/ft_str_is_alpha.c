/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:38:34 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/11 11:53:33 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}

/* #include <unistd.h>
#include <stdio.h>
int	main(void)
{
	 printf("%d\n",ft_str_is_alpha("Hel1lo"));
	 printf("%d\n",ft_str_is_alpha("Hello"));
} */
