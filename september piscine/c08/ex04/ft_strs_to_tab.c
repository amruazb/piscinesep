/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:21:48 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/25 18:21:54 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	char	*d;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	d = dest;
	if (!d)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*array;
	struct s_stock_str	*d;

	index = 0;
	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	d = array;
	if (!d)
		return (NULL);
	while (index < ac)
	{
		array[index].size = ft_strlen(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}
	array[index].str = 0;
	array[index].copy = 0;
	return (array);
}

// int	main(int argc, char **argv)
// {
// 	int					index;
// 	struct s_stock_str	*structs;

// 	structs = ft_strs_to_tab(argc, argv);
// 	index = 0;
// 	while (index < argc)
// 	{
// 		printf("%d\n", index);
// 		printf("\t| original : $%s$ @ %p\n",
// 					structs[index].str, structs[index].str);
// 		printf("\t|   copied : $%s$ @ %p\n", 
// 					structs[index].copy, structs[index].copy);
// 		printf("\t|     size : %d\n", structs[index].size);
// 		index++;
// 	}
// }