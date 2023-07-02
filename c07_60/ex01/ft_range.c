/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 04:53:46 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/21 05:54:50 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	min2;
	int	*range;

	len = max - min;
	if (len <= 0)
	{
		return (NULL);
	}
	range = (int *) malloc(sizeof(int) * (len + 1));
	len = 0;
	min2 = min;
	while (len < (max - min))
	{
		range[len] = min2;
		min2 ++;
		len ++;
	}
	return (range);
}
/*
int	main()
{
	int *saucisson = ft_range(4, 36);
	int	i = 36 - 4;
	while (i > 0)
	{
		printf("%d\n", *saucisson);
		i--;
		saucisson++;
	}
}
*/
