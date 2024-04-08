/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:08:35 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 17:01:00 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	compt_i;

	compt_i = 0;
	while (src[compt_i] != '\0')
	{
		dest[compt_i] = src[compt_i];
		compt_i++;
	}
	dest[compt_i] = '\0';
	return (dest);
}
/*
int main()
{
	char	src[34] = "il etait une fois un petit renard";
	char	dest[40];
	int	compt_j;

	compt_j = 0;
	ft_strcpy(dest, src);
	while (dest[compt_j] != '\0')
	{
		write(1, &dest[compt_j], 1);
		compt_j++;
	}
	write(1, "\0", 1);
}
*/
