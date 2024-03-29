/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:22:20 by kristof           #+#    #+#             */
/*   Updated: 2024/01/28 12:56:02 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
		unsigned int		i;

		i = 0;
		while (s1[i] != '\0' && s1[i] == s2[i])
		{
				i++;
		}
		if (s1[i] == s2[i])
		{
				return (0);
		}
		else
		{
				return (s1[i] - s2[i]);
		}
}

int		main(void)
{
		char str1[] = "Hello";
		char str2[] = "Hello";
		char str3[] = "World";

		printf("compare 1 and 2 - equal: %d\n", ft_strcmp(str1, str2));
		printf("compare 1 and 3 : %d\n", ft_strcmp(str1, str3));
		printf("compare 3 and 1: %d\n", ft_strcmp(str3, str1));
		return (0);
}
