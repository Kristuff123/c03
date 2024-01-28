/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:01:29 by kristof           #+#    #+#             */
/*   Updated: 2024/01/28 13:23:48 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
		unsigned int	i;
		i = 0;
		if (n == 0)
		{
				return (0);
		}
		while (s1[i] !='\0' && s1[i] == s2[i] && i < n -1)
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
		char str1[] = "krzysztof";
		char str2[] = "krzys";
		char str3[] = "krzyg";
		unsigned int	n;
		n = 5;
		printf("compare 1 and 2: %d\n", ft_strncmp(str1, str2, n));
		printf("compare 1 and 3: %d\n", ft_strncmp(str1, str3, n));
		printf("compare 1 and 3 but just 4 letters: %d\n", ft_strncmp(str1, str3, 4));
		return (0);
}
