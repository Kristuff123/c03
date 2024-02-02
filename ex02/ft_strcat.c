/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:34:38 by kristof           #+#    #+#             */
/*   Updated: 2024/02/02 09:35:24 by kristof          ###   ########.fr       */
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


int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    // Concatenate the second argument to the first
    ft_strcat(argv[1], argv[2]);

    // Print the concatenated string
	printf("Program name: %s\n", argv[0]);
    printf("Concatenated string: %s\n", argv[1]);

    return 0;
}
