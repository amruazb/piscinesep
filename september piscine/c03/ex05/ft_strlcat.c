/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:59:55 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/21 12:36:13 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	unsigned int		cd = 0;
// 	unsigned int		cs = 0;
// 	unsigned int		tln;	
// 	char	*d;
// 	char	*s;

// 	d = dest;
// 	s = src;
// 	while (*d)
// 	{
// 		d++;
// 		cd++;
// 	}
// 	while (*s)
// 	{
// 		s++;
// 		cs++;
// 	}
// 	tln = cd + cs;
// 	while (*src && cd + 1 < size)
// 	{
// 		*d = *src;
// 		d++;
// 		src++;
// 		cd++;
// 	}
// 	*d = '\0';
// 	return (tln);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*first;

	first = dest;
	while (dest && src && *src && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	// while (n > 0)
	// {
	// 	*dest = '\0';
	// 	dest++;
	// 	n--;
	// }
	return (first);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cs;
	unsigned int	cd;
	int				tln;

	if (!dest || !src)
		return (0);
	cs = ft_strlen(src);
	cd = ft_strlen(dest);
	tln = cd + cs + 1;
	if (cd + 1 < size)
	{
		ft_strncpy(dest + cd, src, size - cd - 1);
	}
	dest[tln] = '\0';
	return (tln);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int	main(int ac, char **av)
// {
// 	if (ac < 4)
// 	{
// 		printf("Enter a destination source and a limit:\n");
// 	}
// 	else
// 	{
// 		int result = ft_strlcat(av[1],av[2],atoi(av[3]));
// 		//unsigned long	okay = strlcat(av[4], av[2], atoi(av[3]));
// 		printf("The total length of your source and the destination you need is: %d.\n",result);
// 		printf("The destination is now:%s\n",av[1]);
// 		// printf("\n\nThe total length of your source and the destination you need is: %lu.\n");
// 		printf("The destination is now:%s\n",av[1]);
// 	}
// }
int main()
{
	char x[30] = "hello ";
	char y[20] = "world";
	ft_strlcat(x,y,40);
	printf("%s",x);
}
