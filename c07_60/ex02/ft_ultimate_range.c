/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 06:55:45 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/24 16:12:29 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	min2;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (range == NULL)
		return (-1);
	*range = (int *) malloc(sizeof(int) * (len));
	len = 0;
	min2 = min;
	while (len < (max - min))
	{
		(*range)[len] = min2;
		min2++;
		len++;
	}
	return (len);
}
/*
   int main()
   {
   int *saucisson;
   int oui;
   oui = ft_range(&saucisson, 4, 36);
   int i = 36 - 4;
   while (i > 0)
   {
   printf("%d\n", oui);
   i--;
   saucisson++;
   }
   return 0;
   }
*/
