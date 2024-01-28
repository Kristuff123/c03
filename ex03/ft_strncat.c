/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:06:01 by kristof           #+#    #+#             */
/*   Updated: 2024/01/28 14:31:13 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
		unsigned int		i;
		unsigned int		j;

		i = 0;
		j = 0;
		if (nb == 0)
		{
				return (dest);
		}
		while (dest[i] !='\0')
		{
				i++;
		}
		while (src[j] !='\0' && j < nb - 1)
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
		char stringOne[30] = "hello";
		char stringTwo[] = " , Krzysztof Graczyk";
		unsigned int	nb;
		
		nb = 13;
		printf("string one before fnction: %s\n", stringOne);
		ft_strncat(stringOne, stringTwo, nb);
		printf("string one after my function: %s\n", stringOne);
		return (0);
}
