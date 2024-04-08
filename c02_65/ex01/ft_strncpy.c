/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:41:11 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 18:51:05 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	compt_i;

	compt_i = 0;
	while (src[compt_i] != '\0' && compt_i < n)
	{
		dest[compt_i] = src[compt_i];
		compt_i++;
	}
	while (compt_i < n)
	{
		dest[compt_i] = '\0';
		compt_i++;
	}
	return (dest);
}
/*
int main()
{
	char	src[34] = "il etait une fois un petit renard";
	char	dest[40];
	unsigned int	compt_j;
	unsigned int	dest_lenght;

	compt_j = 0;
	dest_lenght = 40;
	ft_strncpy(dest, src, dest_lenght);
	while (compt_j != dest_lenght)
	{
		write(1, &dest[compt_j], 1);
		compt_j++;
	}
	write(1, "\0", 1);
}
*/
