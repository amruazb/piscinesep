/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:13:44 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 10:01:49 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*pstr;
	char	*str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	pstr = malloc(i + 1);
	if (pstr == NULL)
		return (NULL);
	str = pstr;
	while (*src)
		*pstr++ = *src++;
	*pstr = '\0';
	return (str);
}

/* #include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s", ft_strdup(av[1]));
	write(1, "\n", 1);
} */
