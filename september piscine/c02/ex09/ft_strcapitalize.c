/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:42:52 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/24 09:51:38 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 1;
	while (*str)
	{
		if (c && *str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		if (!(*str >= 97 && *str <= 122) && ! 
			(*str >= 65 && *str <= 90) && !(*str >= 48 && *str <= 57))
		{
			c = 1;
		}
		else
		{
			c = 0;
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char j[] = "salut, coMMMMt tu vas? 42mots quarante-deux; cinq+ew+ef";
    ft_strcapitalize(j);
    printf("%s", j);
    return 0;
}

