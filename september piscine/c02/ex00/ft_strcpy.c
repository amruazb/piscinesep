/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:36:12 by aabashee          #+#    #+#             */
/*   Updated: 2023/09/11 15:30:07 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*end;

	end = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (end);
}

// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	char a[] = "Hi how are you";
// 	char b[] = "Hello Aamir Zuhail";
// 	ft_strcpy(b,a);
// 	printf("%s",b);
// }

/* int main(int ac , char **av)
{
	int i = 1;
	while(ac > i)
	{
		printf("%s\n%s\n",av[i],av[i]);
		i++;
	}
} */
