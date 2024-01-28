/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:34:38 by kristof           #+#    #+#             */
/*   Updated: 2024/01/28 13:46:11 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
		int		i;
		int		j;

		i = 0;
		j = 0;
		while (dest[i] !='\0')
		{
				i++;
		}
		while (src[j] !='\0')
		{
				dest[i] = src[j];
				i++;
				j++;
		}
		dest[i] = '\0';
		return (dest);
}

int		main(void)
{
		char str1[20] = "krzysztof";
		char str2[] = " graczyk";
		ft_strcat(str1, str2);
		printf("%s\n", str1);
		return (0);
}

