/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:42:01 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/14 09:57:43 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*p;

	p = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (p);
}

/* #include <stdio.h>
int main()
{ 
	char str[] ="Hi How Are You!";
	ft_strupcase(str);
	printf("%s",str);
} */
