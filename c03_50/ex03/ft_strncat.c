/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:52:27 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/19 22:27:10 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strcpy(char *dest, char *src, int i, unsigned int nb)
{
	unsigned int	j;

	j = 0;
	while (src[j] != '\0' && j < nb)
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = ft_strlen(dest);
	ft_strcpy(dest, src, i, nb);
	return (dest);
}
/*
int	main()
{
	char str1[] = "ah oui oui";
	char str2[50] = "pouet pouet le clown";

	ft_strncat(str2, str1, 2);
	printf("%s", str2);
}
*/
