/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:57:24 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/18 13:57:52 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int main(int ac, char **av)
{
	if(ac != 2)
	{
		printf("Enter a string to get length!\n");
	}
	else if(ac == 2)
	{
		printf("Length of the string is: %d!\n",ft_strlen(av[1]));
	}
} */