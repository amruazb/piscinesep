/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:42:15 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/25 17:40:06 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	{
		if (min >= max)
		{
			*range = NULL;
			return (0);
		}
		i = max - min;
		result = malloc(i * sizeof(int));
		if (result == NULL)
		{
			*range = NULL;
			return (-1);
		}
		*range = result;
		i = 0;
		while (max > min)
		{
			result[i++] = min++;
		}
		return (i);
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Usage: %s <range> <min> <max>\n", av[0]);
		return (1);
	}
	int range;
	int min = atoi(av[1]);
	int max = atoi(av[2]);
	int *result;
	int i = 0;
	int size;

	int ret = ft_ultimate_range(&result, min, max);

	if (ret == -1)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	else if (ret == 0)
	{
		printf("Empty range\n");
		return (0);
	}
	size = ret;
	while (i < size)
	{
		printf("%d ", result[i]);
		i++;
	}
	free(result);
	return (0);
}

