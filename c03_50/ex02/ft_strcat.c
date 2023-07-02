/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 06:02:16 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/19 22:26:47 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strcpy(char *dest, char *src, int i)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

int	ft_strlen(char *str)
{
	int	strlen_counter;

	strlen_counter = 0;
	while (*str != '\0')
	{
		strlen_counter ++;
		str++;
	}
	return (strlen_counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(dest);
	ft_strcpy(dest, src, i);
	return (dest);
}

int	main()
{
	char str1[] = "ah oui oui";
	char str2[] = "pouet pouet le clown";
	printf("%s", ft_strcat(str2, str1));
}

