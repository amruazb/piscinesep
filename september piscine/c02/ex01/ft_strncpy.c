/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:36:37 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/12 15:14:31 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*first;

	first = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (first);
}

/* #include <string.h>
#include <stdio.h>
int main()
{
	unsigned int n = 14;
	char a[] = "Hi how are you!";
	char b[] = "Hello Aamir    Zuhail";
	ft_strncpy(b,a,n);
	printf("destination is now : %s\n",b);
	strncpy(b,a,n);
	printf("destination of standard is now :%s\n", b);
} */
