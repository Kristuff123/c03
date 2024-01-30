#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
		int		i;
		int		j;

		i = 0;
		if (to_find[0] == '\0')
		{
				return (str);
		}
		while (str[i] != '\0')
		{
				j = 0;
				while (str[i + j] == to_find[j])
				{	
					if (to_find[j + 1] == '\0')
					{		
						return (str + i);
					}
					j++;
				}	
				i++;
		}
		return (0);
}

int		main(void)
{
		char	str[] = "pan krzysztof graczyk";
//		char	to_find[] = "krzys";
//		char	to_find[] = "";
//		char	to_find[] = "czy";
		char	to_find[] = "cwel";

		char	*result = ft_strstr(str, to_find);

		if (result != 0)
		{
				printf("substring found at pos: %ld\n", result - str);
		}
		else
		{
				printf("substring not found\n");
		}
		return (0);
}
