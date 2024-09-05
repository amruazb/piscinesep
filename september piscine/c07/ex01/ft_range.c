/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:29:25 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/25 11:49:27 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	*ptr;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	ptr = array;
	while (min < max)
	{
		*ptr++ = min++;
	}
	return (array);
}

/* int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Usage: %s <min> <max>\n", av[0]);
		return (1);
	}
	int min = atoi(av[1]);
	int max = atoi(av[2]);
	int *result;
	int i = 0;
	int size;

	result = ft_range(min, max);
	if (result != NULL)
	{
		size = max - min;
		while (i < size)
		{
			printf("%d ", result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("Empty range\n");
	return (0);
} */
