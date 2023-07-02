/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:42:34 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/11 07:24:57 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temptab;

	x = 0;
	while (x < (size / 2))
	{
		y = size - x - 1;
		temptab = tab[x];
		tab[x] = tab[y];
		tab[y] = temptab;
		x++;
	}
}
/*
int main()
{
}
*/
